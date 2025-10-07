#include <stdio.h>

int main()
{
    int n, factorial = 1;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Faktorial tidak terdefinisi untuk bilangan negatif!\n");
        return 1;
    }

    for (int i = 2; i <= n; i++)
    {
        int temp = factorial;
        factorial = 0;  
        
        for (int j = 0; j < i; j++)
        {
            factorial += temp;
        }
    }

    printf("Faktorial dari %d adalah: %d\n", n, factorial);

    return 0;
}