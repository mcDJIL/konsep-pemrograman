#include <stdio.h>

int main()
{
    char ch;

    while ((ch = getchar()) != 'X')
    {
        printf("%c", ch);
    }
    
    return 0;
} 
