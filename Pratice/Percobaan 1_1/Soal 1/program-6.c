#include <stdio.h>
#include <stdlib.h>

void program6();

int main()
{
    program6();
    
    system("pause");

    return 0;
}

void program6() {
    printf("\nProgram 3.6\n");

    // Declare variables
    int value1, value2, sum;
    // Assign values and calculate their sum
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;
    
    // Display the result
    printf ("The sum of %i and %i is %i\n", value1, value2, sum);
}