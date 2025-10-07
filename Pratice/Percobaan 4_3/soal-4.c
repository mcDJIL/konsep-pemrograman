#include <stdio.h>

int main()
{
    int n;
    float nilai, total = 0, rataRata;
    float min, max;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Jumlah data harus lebih dari nol");
        return 1;
    }

    printf("Masukkan nilai ke-1: ");
    scanf("%f", &nilai);
    min = max = nilai;
    total = nilai;

    for (int i = 2; i <= n; i++)
    {
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%f", &nilai);

        total += nilai;

        if (nilai < min) {
            min = nilai;
        }

        if (nilai > max) {
            max = nilai;
        }
    }

    rataRata = total / n;

    printf("\n===Daftar Nilai Mahasiswa===\n");
    printf("Nilai minimal: %.2f\n", min);
    printf("Nilai maksimal: %.2f\n", max);
    printf("Nilai rata-rata: %.2f\n", rataRata);
    
    return 0;
}
