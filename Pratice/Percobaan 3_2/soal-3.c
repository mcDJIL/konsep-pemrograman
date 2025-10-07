#include <stdio.h>

int main()
{
    float value;

    printf("Masukkan nilai angka: ");
    scanf("%f", &value);

    if (value > 80 && value <= 100) {
        puts("Nilai huruf adalah A");
    } else if (value > 60 && value <= 80) {
        puts("Nilai huruf adalah B");
    } else if (value > 55 && value <= 60) {
        puts("Nilai huruf adalah C");
    } else if (value > 40 && value <= 55) {
        puts("Nilai huruf adalah D");
    } else {
        puts("Nilai huruf adalah E");
    }
    
    return 0;
}
