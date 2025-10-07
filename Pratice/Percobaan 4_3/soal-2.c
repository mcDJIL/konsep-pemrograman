#include <stdio.h>

int main()
{
    int n;

    printf("Masukkan sembarang bilangan: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1) {
            if (i % 3 == 0) {
                continue;
            }
            
            printf("%d ", i);
        }
    }         
    
    return 0;
}
