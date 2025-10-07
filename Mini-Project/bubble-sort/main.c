#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int numbers[], int numbersLength) {
    for (int i = 0; i < numbersLength - 1; i++)
    {
        for (int j = 0; j < numbersLength - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < numbersLength; i++)
    {
        printf("%d ", numbers[i]);
    }
    
}

int main()
{
    int numbers[] = {10, 4, 2, 5, 3};
    int numbersLength = sizeof(numbers) / sizeof(numbers[0]);

    bubbleSort(numbers, numbersLength);

    system("pause");

    return 0;
}
