#include <stdio.h>

int main()
{
    int i = 1;
    char choice;
    float total, number;

    printf("Masukkan bilangan ke-%d : ", i);
    scanf("%f", &number);
    total += number;
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
        
        } else {
            printf("Pilihan tidak valid! Silakan pilih y atau t\n");
            getchar();
        }
        
        printf("Mau memasukkan data lagi [y/t] ? ");
        scanf("%c", &choice);
    }

    printf("Total bilangan = %g", total);

    return 0;
}
