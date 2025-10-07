#include <stdio.h>
#include <stdlib.h>

int addition(int valueA, int valueB);
int chooseFirstNumber();
int chooseSecondNumber();

int main()
{
    int valueA, valueB, result;
 
    printf("===Operasi Penjumlahan===\n\n");

    valueA = chooseFirstNumber();
    valueB = chooseSecondNumber();
    result = addition(valueA, valueB);

    printf("Hasil penjumlahan antara %d dan %d adalah = %d\n", valueA, valueB, result);

    system("pause");

    return 0;
}

int addition(int valueA, int valueB) {
    return valueA + valueB;
}

int chooseFirstNumber() {
    int value;
    int valid;

    do {
        printf("Masukkan angka pertama: ");
        valid = scanf("%d", &value);

        if (valid == 0) {
            printf("Input tidak valid! Harus angka.\n");
            while (getchar() != '\n');
        }
    } while (valid == 0);

    return value;
}

int chooseSecondNumber() {
    int value;
    int valid;

    do {
        printf("Masukkan angka kedua: ");
        valid = scanf("%d", &value);

        if (valid == 0) {
            printf("Input tidak valid! Harus angka.\n");
            while (getchar() != '\n');
        }
    } while (valid == 0);

    return value;
}