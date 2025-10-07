#include <stdio.h>
#define MAX 20

void printFibonacci(int fibonacci[], int length);

int main(int argc, char const *argv[])
{
    int fibonacci[MAX], length, first = 0, second = 1, next;

    puts("BILANGAN FIBONACCI");
    printf("Berapa panjang deret (maks 20) : ");
    scanf("%d", &length);
    fflush(stdin);

    if (length >= 1) {
        fibonacci[0] = first;
    }

    if (length >= 2) {
        fibonacci[1] = second;
    }

    for (int i = 2; i < length; i++)
    {
        next = first + second;
        fibonacci[i] = next;

        first = second;
        second = next;
    }

    printFibonacci(fibonacci, length);

    return 0;
}

void printFibonacci(int fibonacci[], int length) {
    printf("\n%d deret bilangan Fibonacci adalah\n", length);

    for (int i = 0; i < length; i++)
    {
        printf("%d", fibonacci[i]);
        if (i != length - 1) {
            printf(", ");
        }
    }

    printf("\nSelesai");
}