#include <stdio.h>

int main() {
    int angka, sisa, jumlah = 0;
    int digit[20], count = 0;

    printf("Masukkan bilangan: ");
    scanf("%d", &angka);

    int temp = angka;

    if (angka < 0) {
        angka = -angka;
    }

    while (angka > 0) {
        sisa = angka % 10;
        jumlah += sisa;
        digit[count++] = sisa;
        angka /= 10;
    }

    printf("Jumlah angka dari bilangan %d = ", temp);
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", digit[i]);
        if (i > 0) {
            printf(" + ");
        }
    }
    printf(" = %d\n", jumlah);

    return 0;
}
