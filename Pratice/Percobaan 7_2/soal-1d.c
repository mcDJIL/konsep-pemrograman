#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char str[100], strUpper[100], choice = 'y';
    int panjangStr;

    puts("UBAH JADI HURUF BESAR");
    puts("User defined function");

    do
    {
        if (choice == 'y')
        {
            printf("\nMasukkan sembarang kalimat :\n");
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0';

            printf("\nMengubah menjadi UPPERCASE\n");

            printf("String 1 = %s\n", str);
            printf("String 2 = %s\n", strupr(str));x`
            printf("Mau lagi (y/t) ? ");
            choice = getchar();
            getchar();
        } else {
            printf("Input tidak valid, harap memilih antara (y/t)!\n");
            printf("Mau lagi (y/t) ? ");
            choice = getchar();
            getchar();
        }
    } while (choice != 't');
    
    printf("Selesai");
    return 0;
}