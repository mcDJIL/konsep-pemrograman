#include <stdio.h>
#include <string.h>

int pjgstr(char str[100]);
void balikstr(char str[100], char str2[100]);

int main(int argc, char const *argv[])
{
    char str[100], str2[100];
    int panjangStr;

    puts("HITUNG PANJANG DAN BALIK KALIMAT");
    puts("User defined function");

    printf("\nMasukkan sembarang kalimat\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    panjangStr = pjgstr(str);

    printf("Panjang kalimatnya = %d karakter\n", panjangStr);

    printf("\nJika dibalik = \n");

    balikstr(str, str2);
    printf("%s", str2);

    return 0;
}

int pjgstr(char str[100]) {
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    
    return i;
}

void balikstr(char str[100], char str2[100]) {
    int panjangStr = pjgstr(str);

    for (int i = 0; i < panjangStr; i++)
    {
        str2[i] = str[panjangStr - 1 - i];
    }

    str2[panjangStr] = '\0';
}