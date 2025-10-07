#include <stdio.h>

#define PI 3.14159f

float radian(float derajat);

int main()
{
    float derajat, result;
    printf("Masukkan nilai derajat: ");
    scanf("%f", &derajat);

    result = radian(derajat);

    printf("Hasil konversi %g derajat ke radian = %g", derajat, result);
    
    return 0;
}

float radian(float derajat) {
    float rad;

    rad = derajat / 180.0f * PI;

    return rad;
}