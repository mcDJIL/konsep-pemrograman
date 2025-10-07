#include <stdio.h>

int prima(int n);

int main()
{
    int n, isPrime;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    isPrime = prima(n);

    if (isPrime == 1) {
        printf("Bilangan %d adalah bilangan prima", n);
    } else {
        printf("Bilangan %d bukan bilangan prima", n);
    }

    return 0;
}

int prima(int n) {
    if (n <= 1) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}