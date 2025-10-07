#include <stdio.h>
#include <stdlib.h>

void program5();

int main()
{
    program5();
    
    system("pause");

    return 0;
}

void program5() {
    printf("\nProgram 3.5\n");
    
    int value1, value2, sum;
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;
    printf ("The sum of %i and %i is %i\n", value1, value2, sum);
}