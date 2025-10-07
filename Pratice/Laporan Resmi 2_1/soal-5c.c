#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, x, z;
    int resultA, resultB;

    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    
    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    getchar();

    printf("Masukkan nilai c: ");
    scanf("%d", &c);
    getchar();

    printf("Masukkan nilai x: ");
    scanf("%d", &x);
    getchar();

    printf("Masukkan nilai z: ");
    scanf("%d", &z);
    getchar();

    resultA = b * pow(x, 2) + 0.5 * x - c;
    resultB = 0.3 * x * z / 2 * a;

    printf("Hasil pernyataan 1 adalah %d\n", resultA);
    printf("Hasil pernyataan 2 adalah %d", resultB);
    
    return 0;
}
