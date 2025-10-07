#include <stdio.h>

int main()
{
    int jmlTiket, jm3, sm3;
    int hargaTiket = 50000;
    int totalBayar;

    printf("Masukkan jumlah tiket yang ingin anda beli: ");
    scanf("%d", &jmlTiket);

    jm3 = jmlTiket / 3;
    sm3 = jmlTiket % 3;

    totalBayar = jm3 * (2 * hargaTiket) + sm3 * hargaTiket;

    printf("Total yang harus anda bayarkan adalah: %d", totalBayar);
    
    return 0;
}
