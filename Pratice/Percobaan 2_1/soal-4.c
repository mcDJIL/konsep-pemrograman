#include <stdio.h>

int main()
{
    int a = 12, b = 12, c = 3, d = 4;
    int resultA, resultB, resultC, resultD, resultE, resultF;

    resultA = a % b;
    resultB = a - c;
    resultC = a + b;
    resultD = a / d;
    resultE = a / d * d + a % d;
    resultF = a % d / d * a - c;

    printf("Hasil dari a modulus b adalah = %d\n", resultA);
    printf("Hasil dari a - c adalah = %d\n", resultB);
    printf("Hasil dari a + b adalah = %d\n", resultC);
    printf("Hasil dari a / d adalah = %d\n", resultD);
    printf("Hasil dari a / d * d + a modulus d adalah = %d\n", resultE);
    printf("Hasil dari a modulus d / d * a - c adalah = %d\n", resultF);
    
    return 0;
}
