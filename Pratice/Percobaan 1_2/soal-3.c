#include <stdio.h>

int addition(int valueA, int valueB);

int main()
{
    int valueA = 1024, valueB = 4096, result;

    result = addition(valueA, valueB);

    printf("Hasil penjumlahan bilangan 1024 dan 4096 adalah = %d\n", result);

    return 0;
}

int addition(int valueA, int valueB)  {
    return valueA + valueB;
}