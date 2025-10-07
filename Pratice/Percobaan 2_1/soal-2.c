#include <stdio.h>

int main()
{
    int dolar, konversiRupiah = 11090;
    float uangRupiah;

    printf("Masukkan uang dolar: ");
    scanf("%d", &dolar);

    uangRupiah = dolar * konversiRupiah;

    printf("Hasil konversi $%d ke uang rupiah adalah = %g", dolar, uangRupiah);

    return 0;
}
