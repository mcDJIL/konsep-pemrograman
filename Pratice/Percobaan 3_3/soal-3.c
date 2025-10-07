#include <stdio.h>

#define PHI 3.14

void cubeVolume();
void circleArea();
void cylinderVolume();

int main()
{
    int choice;

    do
    {
        puts("Menu :\t1. Menghitung volume kubus");
        puts("\t2. Menghitung luas lingkaran");
        puts("\t3. Menghitung volume silinder");
        printf("Pilih menu: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            cubeVolume();
            break;
        
        case 2:
            circleArea();
            break;
        
        case 3:
            cylinderVolume();
            break;
        
        default:
            printf("Kamu hanya boleh memilih menu 1, 2, atau 3\n");
            break;
        }
        
    } while (choice != 1 || choice != 2 || choice != 3);
    
    
    return 0;
}

void cubeVolume() {
    float side, result;

    printf("Masukkan panjang sisi kubus: ");
    scanf("%f", &side);

    result = side * side * side;

    printf("Volume kubus (vol = sisi^3) adalah = %g\n", result);
}

void circleArea() {
    float radius, result;

    printf("Masukkan panjang jari-jari lingkaran: ");
    scanf("%f", &radius);

    result = PHI * radius * radius;

    printf("Luas lingkaran (luas = 3.14 * r^2) adalah = %g\n", result);
}
void cylinderVolume() {
    float radius, result, height;

    printf("Masukkan panjang jari-jari lingkaran: ");
    scanf("%f", &radius);

    printf("Masukkan tinggi silinder: ");
    scanf("%f", &height);

    result = PHI * radius * radius * height;

    printf("Volume silinder (vol = 3.14 * r^2 * t) adalah = %g\n", result);
}