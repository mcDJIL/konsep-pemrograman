#include <stdio.h>

int ganjil(int nilai);

int main()
{
    int isGanjil, n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    isGanjil = ganjil(n);

    if (isGanjil == 1) {
        printf("Bilangan %d adalah ganjil", n);
    } else {
        printf("Bilangan %d adalah genap", n);
    }

    return 0;
}

int ganjil(int nilai) {
    if (nilai % 2 == 1) {
        return 1;
    } else {
        return 0;
    }
}