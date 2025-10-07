#include <stdio.h>
#include <math.h>

float kuadrat(float x);

int main()
{
    float x;
    float result;
    printf("Masukkan nilai x: ");
    scanf("%f", &x);

    result = kuadrat(x);

    printf("%g", result);
    
    return 0;
}

float kuadrat(float x) {
    float result;

    result = pow(x, 2);

    return result;
}