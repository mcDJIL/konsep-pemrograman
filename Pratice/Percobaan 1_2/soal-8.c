#include <stdio.h>

int main()
{
    int number;
    char alphabet;

    printf("Masukkan angka: ");
    scanf("%d", &number);
    printf("Masukkan huruf: ");
    getchar();
    scanf("%c", &alphabet);

    printf("Menampilkan angka %d dan huruf %c", number, alphabet);

    return 0;
}
