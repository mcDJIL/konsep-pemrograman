#include <stdio.h>
#include <string.h>
#include <ctype.h>

int bandingstr1(char str1[], char str2[]);

int main(int argc, char const *argv[])
{
    char str1[100], str2[100], choice;
    int result;

    puts("MEMBANDINGKAN 2 STRING - CASE SENSITIVE");
    puts("User defined function");

    do
    {
        printf("\nMasukkan kalimat pertama: ");
        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = '\0';
    
        printf("Masukkan kalimat kedua: ");
        fgets(str2, sizeof(str2), stdin);
        str2[strcspn(str2, "\n")] = '\0';
    
        result = bandingstr1(str1, str2);
    
        if (result == 0) {
            printf("%s = %s\n", str1, str2);
        } else if (result > 0) {
            printf("%s > %s\n", str1, str2);
        } else {
            printf("%s < %s\n", str1, str2);
        }

        printf("Mau lagi (y/t) ? ");
        choice = getchar();
        getchar();
    } while (choice == 'y' || choice == 'Y');

    puts("Selesai");

    return 0;
}

int bandingstr1(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }

        i++;
    }
    
    return str1[i] - str2[i];
}