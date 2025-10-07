#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int main(int argc, char const *argv[])
{
    int ordo;
    char choice;

    puts("PENJUMLAHAN MATRIKS");

    do
    {
        printf("\nMasukkan ordonya : ");
        scanf("%d", &ordo);
        fflush(stdin);

        int matriksA[ordo][ordo];
        int matriksB[ordo][ordo];
        int matriksC[ordo][ordo];

        puts("Masukkan elemen-elemen array");
        puts("Array A");

        for (int i = 0; i < ordo; i++)
        {
            for (int j = 0; j < ordo; j++)
            {
                int temp = 0;

                printf("A[%d][%d] = ", i, j);
                scanf("%d", &temp);
                fflush(stdin);

                matriksA[i][j] = temp;
            }
        }

        printf("\nArray B\n");

        for (int i = 0; i < ordo; i++)
        {
            for (int j = 0; j < ordo; j++)
            {
                int temp = 0;

                printf("B[%d][%d] = ", i, j);
                scanf("%d", &temp);
                fflush(stdin);

                matriksB[i][j] = temp;
            }
        }

        for (int i = 0; i < ordo; i++)
        {
            for (int j = 0; j < ordo; j++)
            {
                matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
            }
        }

        printf("\nIsi arraynya\n");
        puts("Array A :");
        for (int i = 0; i < ordo; i++)
        {
            for (int j = 0; j < ordo; j++)
            {
                printf("%d ", matriksA[i][j]);
            }

            printf("\n");
        }

        puts("Array B :");
        for (int i = 0; i < ordo; i++)
        {
            for (int j = 0; j < ordo; j++)
            {
                printf("%d ", matriksB[i][j]);
            }

            printf("\n");
        }

        puts("Array C :");
        for (int i = 0; i < ordo; i++)
        {
            for (int j = 0; j < ordo; j++)
            {
                printf("%d ", matriksC[i][j]);
            }

            printf("\n");
        }

        printf("Lagi (y/t) ? ");
        choice = getchar();

    } while (choice != 't');

    return 0;
}
