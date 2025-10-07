#include <stdio.h>

int main()
{
    float gajiPokok, tunjanganIstri, tunjanganAnak, thr, pajak, bantuanTransport, totalPendapatan;
    int totalAnak, masaKerja, totalMasukKerja, asuransi = 20000;

    printf("Masukkan gaji pokok anda: ");
    scanf("%f", &gajiPokok);

    printf("Masukkan masa kerja anda (tahun): ");
    scanf("%d", &masaKerja);
    getchar();

    printf("Masukkan total masuk kerja anda bulan ini (hari): ");
    scanf("%d", &totalMasukKerja);
    getchar();
    
    printf("Masukkan total anak anda: ");
    scanf("%d", &totalAnak);
    getchar();

    tunjanganIstri = gajiPokok * (10 / 100);
    tunjanganAnak = (gajiPokok * (5 / 100)) * totalAnak;
    thr = 5000 * masaKerja;
    pajak = (gajiPokok + tunjanganIstri + tunjanganAnak) * (15 / 100);
    bantuanTransport = 3000 * totalMasukKerja;

    totalPendapatan = gajiPokok + tunjanganIstri + tunjanganAnak + thr - pajak + bantuanTransport - asuransi;

    printf("Total pendapatan anda adalah = %.2f", totalPendapatan);
    
    return 0;
}
