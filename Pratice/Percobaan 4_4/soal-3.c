#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    printf("%d bilangan prima pertama: ", n);

    for (int i = 2; count < n; i++)
    {
        int isPrime = 1;
        
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", i);
            count++;
        }
    }
        
        printf("\n");
        return 0;
    }
    