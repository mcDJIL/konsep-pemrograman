#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool isPrime = true;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = false;
    } else if (n == 2) {
        isPrime = true;
    } else {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d adalah bilangan prima", n);
    } else {
        printf("%d bukan bilangan prima", n);
    }

    return 0;
}
