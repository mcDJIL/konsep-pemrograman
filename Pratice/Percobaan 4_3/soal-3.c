#include <stdio.h>

int main()
{
    int n;

    printf("Masukkan sembarang bilangan: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i > 100) {
            break;
        }

        if (i % 2 == 0) {
            continue;
        }

        if (i % 7 == 0) {
            continue;
        }

        if (i % 11 == 0) {
            continue;
        }

        printf("%d ", i);
    }
    
    return 0;
}
