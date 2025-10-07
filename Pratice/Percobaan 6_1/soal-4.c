#include <stdio.h>
#define MAX 10

void addNumberToArray(int numbers[], int length);
int searchMaxNumber(int numbers[], int length);

int main(int argc, char const *argv[])
{
    int numbers[MAX], maxNumber, length;

    puts("Menemukan NILAI TERBESAR");

    printf("Berapa jumlah data (maks 10) ? ");
    scanf("%d", &length);

    addNumberToArray(numbers, length);

    maxNumber = searchMaxNumber(numbers, length);

    printf("\nNilai terbesar dalam array adalah %d", maxNumber);

    return 0;
}

void addNumberToArray(int numbers[], int length) {
    for (int i = 0; i < length; i++)
    {
        int temp;

        printf("data[%d] = ", i);
        scanf("%d", &temp);

        numbers[i] = temp;
    }
}

int searchMaxNumber(int numbers[], int length) {
    int maxNumber = 0;

    for (int i = 0; i < length; i++)
    {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }
    
    return maxNumber;
}