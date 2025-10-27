#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100];
    int panjangStr;

    puts("HITUNG PANJANG DAN BALIK KALIMAT");
    puts("User defined function");

    printf("\nMasukkan sembarang kalimat\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    panjangStr = strlen(str);

    printf("Panjang kalimatnya = %d karakter\n", panjangStr);

    printf("\nJika dibalik = %s", strrev(str));

    return 0;
}