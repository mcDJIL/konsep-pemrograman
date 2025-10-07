#include <stdio.h>
#include <math.h>

int main()
{
    float x, result;

    printf("Masukkan nilai x: ");
    scanf("%f", &x);

    result = 3 * pow(x, 2) - 5 * x + 6;

    printf("Hasilnya adalah = %g", result);
    
    return 0;
}
