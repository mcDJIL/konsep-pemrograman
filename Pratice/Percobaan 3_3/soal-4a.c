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

    switch (choice)
    {
    case 1:
        puts("Pilihan Anda = Senin");
        puts("Selesai");
        break;
    
    case 2:
        puts("Pilihan Anda = Selasa");
        puts("Selesai");
        break;
    
    case 3:
        puts("Pilihan Anda = Rabu");
        puts("Selesai");
        break;
    
    case 4:
        puts("Pilihan Anda = Kamis");
        puts("Selesai");
        break;
    
    case 5:
        puts("Pilihan Anda = Jumat");
        puts("Selesai");
        break;
    
    case 6:
        puts("Pilihan Anda = Sabtu");
        puts("Selesai");
        break;
    
    case 7:
        puts("Pilihan Anda = Minggu");
        puts("Selesai");
        break;
    
    default:
        puts("Pilih antara 1 sampai 7");
        break;
    }

    system("pause");

    return 0;
}
