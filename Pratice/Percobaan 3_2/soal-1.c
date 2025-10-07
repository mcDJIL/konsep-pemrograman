#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, x1, x2;

    printf("Masukkan nilai a: ");
    scanf("%f", &a);

    printf("Masukkan nilai b: ");
    scanf("%f", &b);

    printf("Masukkan nilai c: ");
    scanf("%f", &c);

    D = (pow(b, 2)) - 4 * a * c;

    printf("%.2f %.2f %.2f\n", a, b, c);

    if (D == 0) {
        x1 = x2 = -b / 2 * a;
    } else if (D > 0) {
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;
    } else if (D < 0) {
        x1 = -b / 2 * a + (sqrt(-D) / 2 * a);
        x2 = -b / 2 * a - (sqrt(-D) / 2 * a);
    }

    printf("Nilai diskriminannya adalah = %g\n", D);
    printf("Nilai x1 = %g dan Nilai x2 = %g\n", x1, x2);
    
    return 0;
}
