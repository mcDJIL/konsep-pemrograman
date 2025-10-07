#include <stdio.h>

int permutasi(int n, int r);

int kombinasi(int n, int r);

int main(int argc, char const *argv[])
{
    int n, r, hasilPermutasi, hasilKombinasi;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    hasilPermutasi = permutasi(n, r);
    hasilKombinasi = kombinasi(n, r);

    printf("Hasil permutasi adalah = %d\n", hasilPermutasi);
    printf("Hasil kombinasi adalah = %d\n", hasilKombinasi);

    return 0;
}

int permutasi(int n, int r)
{
    int faktorialN = 1, faktorialR = 1, newR, result;

    newR = n - r;

    for (int i = n; i > 0; i--)
    {
        faktorialN *= i;
    }
    
    for (int i = newR; i > 0; i--)
    {
        faktorialR *= i;
    }

    result = faktorialN / faktorialR;

    return result;
}

int kombinasi(int n, int r)
{
    int faktorialN = 1, faktorialR = 1, faktorialR2 = 1, newR, result;

    newR = n - r;

    for (int i = n; i > 0; i--)
    {
        faktorialN *= i;
    }
    
    for (int i = newR; i > 0; i--)
    {
        faktorialR *= i;
    }

    for (int i = r; i > 0; i--)
    {
        faktorialR2 *= i;
    }

    result = faktorialN / (faktorialR * faktorialR2);

    return result;
}