#include <stdio.h>

int main()
{
    int number;

    printf("Masukkan sembarang bilangan: ");
    scanf("%d", &number);

    if (number >= 1 && number <= 100) {
        printf("%d ada dalam range 1-100", number);
    } else {
        printf("%d di luar range 1-100", number);
    }
    
    return 0;
}
