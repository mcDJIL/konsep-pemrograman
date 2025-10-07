#include <stdio.h>

int main()
{
    int n;
    char choice;

    do
    {
        printf("Masukkan nilai n: ");
        scanf("%d", &n);

        for (int i = 0; i <= n; i++)
        {
            int sum = 0;

            for (int j = 1; j <= i; j++)
            {
                sum += j;
            }
            
            printf("%d ", sum);
        }

        printf("Apakah anda ingin keluar (y/t)? ");
        getchar();
        choice = getchar();
            
    } while (choice != 'y');
    

    return 0;
}
