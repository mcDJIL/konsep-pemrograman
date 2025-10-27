#include <stdio.h>
#include <stdlib.h>

int* input(int *lengthte);
int findmax(int nilai[], int length);

int main(int argc, char const *argv[])
{
    int max;
    int length;
    int *nilai = input(&length); 

    max = findmax(nilai, length);

    printf("Nilai terbesar dalam array adalah %d", max);

    return 0;
}

int* input(int *length) {
    printf("Masukkan panjang array : ");
    scanf("%d", length);

    int *newArray = (int *) malloc(*length * sizeof(int));

    for (int i = 0; i < *length; i++)
    {
        printf("Nilai ke-%d = ", i + 1);
        scanf("%d", &newArray[i]);
    }
    
    return newArray;
}

int findmax(int nilai[], int length) {
    int max = nilai[0];

    for (int i = 0; i < length; i++)
    {
        if (nilai[i] > max) {
            max = nilai[i];
        }
    }
    
    return max;
}