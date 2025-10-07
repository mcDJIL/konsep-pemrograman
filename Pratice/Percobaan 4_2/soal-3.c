#include <stdio.h>

int main()
{
    int i = 1;
    char choice;
    float total, number, mean, max = 0, min = 0;

    printf("Masukkan bilangan ke-%d : ", i);
    scanf("%f", &number);
    total += number;
    min = max = number;
    getchar();

    printf("Mau memasukkan data lagi [y/t] ? ");
    scanf("%c", &choice);
    
    while (choice != 't')
    { 
        if (choice == 'y') {
            i++;
            
            printf("Masukkan bilangan ke-%d : ", i);
            scanf("%f", &number);
            total += number;
            getchar();
        
            
            if (number < min) {
                min = number;
            }
            
            if (number > max) {
                max = number;
            }
        } else {
            printf("Pilihan tidak valid! Silakan pilih y atau t\n");
            getchar();
        }

        printf("Mau memasukkan data lagi [y/t] ? ");
        scanf("%c", &choice);
    }

    mean = total / i;

    printf("Total bilangan = %g\n", total);
    printf("Rata-rata bilangan = %.2f\n", mean);
    printf("Maksimum = %g\n", max);
    printf("Minimum = %g\n", min);

    return 0;
}
