#include <stdio.h>

void addTwoValue(int *a, int *b);

int main(int argc, char const *argv[])
{
    int number1, number2;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &number1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &number2);

    addTwoValue(&number1, &number2);

    printf("Hasil pass by reference bilangan pertama adalah = %d\n", number1);
    printf("Hasil pass by reference bilangan kedua adalah = %d", number2);

    return 0;
}

void addTwoValue(int *a, int *b)
{
    *a += 2;
    *b += 2;
}