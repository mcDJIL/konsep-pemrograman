#include <stdio.h>

int main()
{
    int n, triangular = 0;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        triangular += i;
        printf("%d", i);
        if (i != 1) {
            printf(" + ");
        }
    }

    printf(" = %d\n", triangular);

    return 0;
}
