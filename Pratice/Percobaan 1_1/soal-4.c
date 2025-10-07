#include <stdio.h>
#include <stdlib.h>

int reduction(int valueA, int valueB);

int main()
{
    int valueA = 87, valueB = 15, result;

    result = reduction(valueA, valueB);

    printf("Hasil pengurangan 87 dengan 15 adalah = %d\n", result);

    system("pause");

    return 0;
}

int reduction(int valueA, int valueB) {
    return valueA - valueB;
}