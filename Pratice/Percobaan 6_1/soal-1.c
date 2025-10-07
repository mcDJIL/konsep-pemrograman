#include <stdio.h>
#define MAX 10

void printArray(int numbers[], int length);

int main(int argc, char const *argv[])
{
    int numbers[MAX], n;

    puts("Array bilangan bulat");
    printf("Berapa jml data (maks 10) : ");
    scanf("%d", &n);
    fflush(stdin);
    puts("Masukkan data bilangannya");

    for (int i = 0; i < n; i++)
    {
        printf("bilangan[%d] = ", i);
        scanf("%d", &numbers[i]);
        fflush(stdin);
    }
    
    printArray(numbers, n);
    
    return 0;
}

void printArray(int numbers[], int length) {
    printf("\n");
    puts("Isi dari array yang diinputkan");

    for (int i = 0; i < length; i++)
    {
        printf("bilangan[%d] = %d\n", i, numbers[i]);
    }
        
    puts("Selesai");
}