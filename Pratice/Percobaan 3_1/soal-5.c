#include <stdio.h>

int main()
{
    int number1, number2;
    float result;
    
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &number1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &number2);

    if (number2 == 0) {
        printf("Division by zero");
        return 1;
    }

    result = number1 / number2;

    printf("Hasil bagi bil1 dengan bil2 adalah %g", result);
    
    return 0;
}
