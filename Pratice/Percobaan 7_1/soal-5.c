#include <stdio.h>
#include <string.h>
#include <ctype.h>

void upperstr(char str[100], char strUpper[100]);

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
            upperstr(str, strUpper);

            printf("String 1 = %s\n", str);
            printf("String 2 = %s\n", strUpper);
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

void upperstr(char str[100], char strUpper[100]) {
    int panjangStr = strlen(str);

    for (int i = 0; i < panjangStr; i++)
    {
        strUpper[i] = toupper(str[i]);
    }
    
    strUpper[panjangStr] = '\0';
}