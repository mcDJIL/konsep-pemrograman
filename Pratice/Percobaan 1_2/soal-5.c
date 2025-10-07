#include <stdio.h>

float multiplication(float valueA, float valueB);

int main()
{
    float valueA, result;
    int valueB = 50;

    scanf("%f", &valueA);

    result = multiplication(valueA, 50);

    printf("Hasil perkalian antara %f dan %d adalah = %f", valueA, valueB, result);

    return 0;
}

float multiplication(float valueA, float valueB) {
    return valueA * valueB;
}