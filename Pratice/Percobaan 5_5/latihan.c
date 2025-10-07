#include <stdio.h>

void fibonnaci(int n);

int main(int argc, char const *argv[])
{
    int n;

    printf("Masukkan nilai ke n: ");
    scanf("%d", &n);

    fibonnaci(n);

    return 0;
}

void fibonnaci(int n) {    
    int first = 0, second = 1, next;

    if (n >= 1) {
        printf("%d ", first);
    }

    if (n >= 2) {
        printf("%d ", second);
    }

    for (int i = 3; i <= n; i++)
    {
        next = first + second;

        printf("%d ", next);

        first = second;
        second = next;
    }
    
}