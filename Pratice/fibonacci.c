#include <stdio.h>

int main(int argc, char const *argv[])
{
    int totalRows;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &totalRows);

    for (int currentRow = 0; currentRow < totalRows; currentRow++)
    {
        for (int spaceCount = 0; spaceCount < totalRows - currentRow - 1; spaceCount++)
        {
            printf("  ");
        }
        
        int binomialCoeff = 1;
        for (int position = 0; position <= currentRow; position++)
        {
            if (position == 0) {
                binomialCoeff = 1;
            } else {
                binomialCoeff = binomialCoeff * (currentRow - position + 1) / position;
            }
            printf("%4d", binomialCoeff);
        }
        
        printf("\n");
    }

    return 0;
}