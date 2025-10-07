#include <stdio.h>

int main()
{
    float dolar, konversiRupiah = 11090.2f;
    float uangRupiah;

    printf("Masukkan uang dolar: ");
    scanf("%f", &dolar);

    uangRupiah = dolar * konversiRupiah;

    printf("Hasil konversi $%.2f ke uang rupiah adalah = %.2f", dolar, uangRupiah);

    return 0;
}
