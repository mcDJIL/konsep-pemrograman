#include <stdio.h>

int main()
{
    int n, count = 0, num = 2;
    char choice;

    do
    {
        printf("Masukkan nilai n: ");
        scanf("%d", &n);

        printf("%d bilangan prima pertama: ", n);

        while (count < n)
        {
            int isPrime = 1;

            for (int j = 2; j < num; j++)
            {
                if (num % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime)
            {
                printf("%d ", num);
                count++;
            }

            num++;
        }

        printf("\n");

        printf("Apakah anda ingin keluar (y/t)? ");
        getchar();
        choice = getchar();
    } while (choice != 'y');

    return 0;
}
