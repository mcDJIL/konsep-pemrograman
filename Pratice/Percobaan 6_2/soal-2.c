#include <stdio.h>

void result(int no[4], float rataRata[4], int length);

int main(int argc, char const *argv[])
{
    int no[4] = {1, 2, 3, 4};
    char name[4][10] = {"Ahmad", "Adang", "Dani", "Edi"};
    int bahasa[4] = {81, 50, 89, 77};
    int matematika[4] = {90, 83, 55, 70};
    int digital[4] = {62, 87, 65, 92};
    float rataRata[4];

    int length = sizeof(no) / sizeof(no[0]);
    
    for (int i = 0; i < length; i++)
    {
        rataRata[i] = (bahasa[i] + matematika[i] + digital[i]) / 3.0;
    }

    result(no, rataRata, length);

    return 0;
}

void result(int no[4], float rataRata[4], int length) {
    printf("No Mhs \t Rata-rata\n");
    puts("------------------------");

    for (int i = 0; i < length; i++)
    {
        printf("%d \t %.2f\n", no[i], rataRata[i]);   
    }

    puts("------------------------");
}