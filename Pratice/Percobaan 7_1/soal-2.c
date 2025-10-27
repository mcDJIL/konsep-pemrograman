#include <stdio.h>
#include <string.h>

int pjgstr(char str[100]);

int main(int argc, char const *argv[])
{
    char str[100];
    int panjangString;

    puts("HITUNG PANJANG KALIMAT");
    puts("User defined function");

    printf("\nMasukkan sembarang kalimat:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    panjangString = pjgstr(str);

    printf("Panjang kalimatnya = %d karakter", panjangString);

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