#include <stdio.h>

int masukan(int jumlahData);
int average(int jumlahData, int totalData);

int main()
{
    int jumlahData, totalData, rataRata;

    printf("Masukkan jumlah data yang diinginkan: ");
    scanf("%d", &jumlahData);
    fflush(stdin);

    totalData = masukan(jumlahData);
    rataRata = average(jumlahData, totalData);

    printf("Nilai rata-rata dari total data %d dan jumlah data %d adalah = %d", totalData, jumlahData, rataRata);

    return 0;
}

int masukan(int jumlahData) 
{
    int i, totalData = 0, data;

    for (i = 1; i <= jumlahData; i++)
    {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &data);
        getchar();

        totalData += data;
    }
    
    return totalData;
}

int average(int jumlahData, int totalData)
{
    int average;

    average = totalData / jumlahData;

    return average;
}
