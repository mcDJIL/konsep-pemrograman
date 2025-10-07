#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    puts("Pilih hari yang Anda inginkan");
    puts("1. Senin");
    puts("2. Selasa");
    puts("3. Rabu");
    puts("4. Kamis");
    puts("5. Jumat");
    puts("6. Sabtu");
    puts("7. Minggu");

    printf("Masukkan pilihan Anda : ");
    scanf("%d", &choice);

    if (choice == 1) {
        puts("Pilihan Anda = Senin");
        puts("Selesai");
    } else if (choice == 2) {
        puts("Pilihan Anda = Selasa");
        puts("Selesai");
    } else if (choice == 3) {
        puts("Pilihan Anda = Rabu");
        puts("Selesai");
    } else if (choice == 4) {
        puts("Pilihan Anda = Kamis");
        puts("Selesai");
    } else if (choice == 5) {
        puts("Pilihan Anda = Jumat");
        puts("Selesai");
    } else if (choice == 6) {
        puts("Pilihan Anda = Sabtu");
        puts("Selesai");
    } else if (choice == 7) {
        puts("Pilihan Anda = Minggu");
        puts("Selesai");
    } else {
        puts("Pilih antara 1 sampai 7");
    }

    system("pause");

    return 0;
}
