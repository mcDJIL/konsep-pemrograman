#include <stdio.h>

int main()
{
    int n, faktorial = 1;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        faktorial *= i;
        printf("%d", i);
        if (i != n) {
            printf("*");
        }
    }
    
    printf(" = %d", faktorial);
    
    return 0;
}
