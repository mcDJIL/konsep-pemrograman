#include <stdio.h>
#include <string.h>

int pjgstr(char str[100]);
void copystr(char asal[100], char tujuan[100]);

int main(int argc, char const *argv[])
{
    char strAsal[100], strTujuan[100];

    puts("COPY STRING");
    puts("User defined function");

    printf("\nMasukkan sembarang kalimat:\n");
    fgets(strAsal, sizeof(strAsal), stdin);
    strAsal[strcspn(strAsal, "\n")] = '\0';

    printf("\nMelakukan copy string\n");

    copystr(strAsal, strTujuan);

    printf("String 1 = %s\n", strAsal);
    printf("String 2 = %s\n", strTujuan);

    return 0;
}

int pjgstr(char str[100]) {
    int i = 0;

    while(str[i] != '\0') {
        i++;
    }

    return i;
}

void copystr(char strAsal[100], char strTujuan[100]) {
    int panjangStr = pjgstr(strAsal);

    for (int i = 0; i < panjangStr; i++)
    {
        strTujuan[i] = strAsal[i];
    }
    
    strTujuan[panjangStr] = '\0';
}