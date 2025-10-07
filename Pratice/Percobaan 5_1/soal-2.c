#include <stdio.h>

void triangular();

int main()
{
    int n;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    triangular(n);

    return 0;
}

void triangular(int n) {
    float result;

    result = n * (n + 1) / 2;

    printf("%g", result);
}