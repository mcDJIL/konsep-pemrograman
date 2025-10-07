#include <stdio.h>

int main()
{
    int number, modulus;

    printf("Masukkan angka: ");
    scanf("%d", &number);

    modulus = number % 2;

    if (modulus == 1) {
        printf("Bilangan yang diinputkan adalah %d.\n", number);
        printf("%d adalah bilangan ganjil.", number);
    } else {
        printf("Bilangan yang diinputkan adalah %d.\n", number);
        printf("%d adalah bilangan genap.", number);
    }

    return 0;
}
