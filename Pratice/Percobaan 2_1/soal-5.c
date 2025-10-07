#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int result;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);

    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    getchar();
    
    printf("Masukkan nilai c: ");
    scanf("%d", &c);
    getchar();

    result = pow(b, 2) - 4 * a * c;

    printf("Hasil operasinya adalah = %d", result);
    
    return 0;
}
