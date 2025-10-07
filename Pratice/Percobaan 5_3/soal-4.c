#include <stdio.h>
#include <math.h>

#define PHI 3.14159f

float radian(float besarSudutBAC);

float hitungPanjangSisi(float radian, float panjangSisiAB);

int main(int argc, char const *argv[])
{
    float sudutBAC, panjangSisiAB, besarRadian, panjangSisiBC;

    printf("Masukkan sudut BAC: ");
    scanf("%f", &sudutBAC);
    fflush(stdin);

    printf("Masukkan panjang sisi AB: ");
    scanf("%f", &panjangSisiAB);
    fflush(stdin);
    
    besarRadian = radian(sudutBAC);

    panjangSisiBC = hitungPanjangSisi(besarRadian, panjangSisiAB);

    printf("Hasil panjang sisi BC adalah = %g", panjangSisiBC);

    return 0;
}

float radian(float besarSudutBAC)
{
    float result;

    result = besarSudutBAC * PHI / 180.f;

    return result;
}

float hitungPanjangSisi(float radian, float panjangSisiAb)
{
    float result;

    result = panjangSisiAb * tan(radian);

    return result;
}