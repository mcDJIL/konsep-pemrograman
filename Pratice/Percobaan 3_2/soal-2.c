#include <stdio.h>
#include <stdlib.h>

float chooseFirstNumber();
float chooseSecondNumber();

int main()
{
    float result, number1, number2;
    int choice;

    number1 = chooseFirstNumber();
    number2 = chooseSecondNumber();

    puts("Menu Matematika");
    puts("1. Penjumlahan");
    puts("2. Pengurangan");
    puts("3. Pembagian");
    puts("4. Perkalian");

    printf("Masukkan pilihan anda : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = number1 + number2;
        break;
    
    case 2:
        result = number1 - number2;
        break;
    
    case 3:
        result = number1 / number2;
        break;

    case 4:
        result = number1 * number2;
        break;
    }

    printf("Hasil operasi tersebut adalah = %g", result);
    
    return 0;
}

float chooseFirstNumber() {
    int validation = 0;
    float value;

    do
    {
        printf("Masukkan bilangan pertama : ");
        validation = scanf("%f", &value);
        
        if (validation == 0) {
            printf("Input harus berupa angka\n");
            while (getchar() != '\n');
        }
    } while (validation == 0);

    return value;
}

float chooseSecondNumber() {
    int validation = 0;
    float value;

    do
    {
        printf("Masukkan bilangan kedua : ");
        validation = scanf("%f", &value);

        if (validation == 0) {
            printf("Input harus berupa angka");
            while (getchar() != '\n');
        }
    } while (validation == 0);
    
    return value;
}