#include <stdio.h>

int main()
{
    int n;
    char choice;

    do
    {
        printf("Masukkan nilai n: ");
        scanf("%d", &n);
    
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", j);
            }
    
            printf("\n");
        }

        printf("Apakah anda ingin keluar (y/t)? ");
        // getchar();
        choice = getchar();
    } while (choice != 'y');
    
    return 0;
}
