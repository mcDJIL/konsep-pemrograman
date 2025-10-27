#include <stdio.h>

int main(int argc, char const *argv[])
{
    int barisA, kolomA, barisB, kolomB;

    do
    {
        printf("Masukkan baris matriks A : ");
        scanf("%d", &barisA);
        fflush(stdin);
        
        printf("Masukkan kolom matriks A : ");
        scanf("%d", &kolomA);
        fflush(stdin);
        
        printf("Masukkan baris matriks B : ");
        scanf("%d", &barisB);
        fflush(stdin);
        
        printf("Masukkan kolom matriks B : ");
        scanf("%d", &kolomB);
        fflush(stdin);

        if (kolomA != barisB) {
            puts("Kolom matriks A harus sama dengan baris matriks B!");
        }
    } while (kolomA != barisB);
    
    int matriksA[barisA][kolomA];
    int matriksB[barisB][kolomB];
    int matriksC[barisA][kolomB];

    printf("\nMatriks A\n");
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            int temp;
            
            printf("Matriks A[%d][%d]", i, j);
            scanf("%d", &temp);
            fflush(stdin);
            
            matriksA[i][j] = temp;
        }
    }
    
    printf("\nMatriks B\n");
    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            int temp;
            
            printf("Matriks B[%d][%d]", i, j);
            scanf("%d", &temp);
            fflush(stdin);

            matriksB[i][j] = temp;
        }
    }

    for (int i = 0; i < barisB; i++)
    {
        for (int j = 0; j < kolomA; j++)
        {
            matriksC[i][j] = 0;
        }
    }
    
    
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            for (int k = 0; k < kolomA; k++)
            {
                matriksC[i][j] += matriksA[i][k] * matriksB[k][j];
            }           
        }
    }

    print("\nHASIL PERKALIAN MATRIKS A DAN B\n");
    puts("Matriks C");
    for (int i = 0; i < barisA; i++)
    {
        for (int j = 0; j < kolomB; j++)
        {
            printf("%d ", matriksC[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}
