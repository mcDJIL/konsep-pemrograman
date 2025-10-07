#include <stdio.h>

const float PHI = 3.14f;

int main()
{
    float radius, result;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);

    result = PHI * radius * radius;

    printf("Hasil luas lingkaran dari panjang jari-jari %.2f adalah = %g", radius, result);

    return 0;
}
