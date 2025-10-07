#include <stdio.h>

int getMaxValue(int number1, int number2);

int main(int argc, char const *argv[])
{
    int number1, number2, maxNumber;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &number1);
    fflush(stdin);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &number2);
    fflush(stdin);

    maxNumber = getMaxValue(number1, number2);

    printf("Bilangan terbesar antara %d dan %d adalah = %d", number1, number2, maxNumber);
    
    return 0;
}

int getMaxValue(int number1, int number2)
{
    int max;

    if (number1 > number2)
    {
        max = number1;
    }
    else if (number2 > number1)
    {
        max = number2;
    }
    else {
        max = number1;
    }
    
    return max;
}