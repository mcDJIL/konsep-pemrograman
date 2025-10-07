#include <stdio.h>

int main()
{
    int jumlahUang, sisa;
    int ratusanRibu, limaPuluhRibu, duaPuluhRibu, sepuluhRibu, limaRibu, duaRibu, seribu;

    printf("Masukkan angka anda: ");
    scanf("%d", &jumlahUang);

    sisa = jumlahUang;

    ratusanRibu = sisa / 100000;
    sisa = sisa % 100000;

    limaPuluhRibu = sisa / 50000;
    sisa = sisa % 50000;

    duaPuluhRibu = sisa / 20000;
    sisa = sisa % 20000;

    sepuluhRibu = sisa / 10000;
    sisa = sisa % 10000;

    limaRibu = sisa / 5000;
    sisa = sisa % 5000;

    duaRibu = sisa / 2000;
    sisa = sisa % 2000;

    seribu = sisa / 1000;
    sisa = sisa % 1000;

    if (ratusanRibu > 0) {
        printf("%d Lembar 100000\n", ratusanRibu);
    } 
    if (limaPuluhRibu > 0) {
        printf("%d Lembar 50000\n", limaPuluhRibu);
    }
    if (duaPuluhRibu > 0) {
        printf("%d Lembar 20000\n", duaPuluhRibu);
    }
    if (sepuluhRibu > 0) {
        printf("%d Lembar 10000\n", sepuluhRibu);
    }
    if (limaRibu > 0) {
        printf("%d Lembar 5000\n", limaRibu);
    }
    if (duaRibu > 0) {
        printf("%d Lembar 2000\n", duaRibu);
    }
    if (seribu > 0) {
        printf("%d Lembar 1000\n", seribu);
    }

    return 0;
}
