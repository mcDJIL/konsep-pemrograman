#include <stdio.h>
#include <math.h>

float chooseFirstNumber();
float chooseSecondNumber();
void result(float valueA, float valueB);

int main()
{
    float valueA;
    float valueB;

    do {
        valueA = chooseFirstNumber();
    } while (valueA == -1);

    do {
        valueB = chooseSecondNumber();
    } while (valueB == -1);

    result(valueA, valueB);
    
    return 0;
}

float chooseFirstNumber() {
    float value;
    int status;

    printf("Masukkan angka pertama (desimal dengan titik): ");
    status = scanf("%f", &value);

    if (status != 1) {
        printf("Input tidak valid! Harus angka.\n");
        while (getchar() != '\n');
        return -1;
    } else {
        return value;
    }
}

float chooseSecondNumber() {
    float value;
    int status;

    printf("Masukkan angka kedua (desimal dengan titik): ");
    status = scanf("%f", &value);

    if (status != 1) {
        printf("Input tidak valid! Harus angka.\n");
        while (getchar() != '\n');
        return -1;
    } else {
        return value;
    }
}

void result(float valueA, float valueB) {
    float total, mean, square;

    total = valueA + valueB;
    mean = (valueA + valueB) / 2;
    square = pow(valueA, valueB);

    printf("Hasil penjumlahan dari %.2f dan %.2f adalah = %.4g\n", valueA, valueB, total);
    printf("Hasil rata-rata dari %.2f dan %.2f adalah = %.4g\n", valueA, valueB, mean);
    printf("Hasil kuadrat dari %.2f dan %.2f adalah = %.4g\n", valueA, valueB, square);
}