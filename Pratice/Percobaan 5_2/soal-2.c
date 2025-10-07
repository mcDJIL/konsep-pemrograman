#include <stdio.h>

long int factorial(int value);

int main()
{
    int n;
    long int result;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("Hasil faktorial bilangan %d = %ld", n, result);

    return 0;
}

long int factorial(int value) {
    int result = value;

    for (int i = value - 1; i > 0; i--)
    {
        result *= i;
    }

    return result;
}