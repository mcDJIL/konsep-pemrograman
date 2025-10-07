#include <stdio.h>

int main()
{
    int var_bulat = 32767;
    double var_pecahan1 = 339.2345678f;
    double var_pecahan2 = 3.4567e+40;
    char var_karakter = 'S';

    printf("Bilangan bulat = %d\n", var_bulat);
    printf("Bilangan pecahan = %7lf\n", var_pecahan1);
    printf("Bilangan eksponen = %e\n", var_pecahan2);
    printf("Karakter = %c\n", var_karakter);
    
    return 0;
} 
