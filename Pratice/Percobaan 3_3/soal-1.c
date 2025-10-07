#include <stdio.h>

int main()
{
    char letter = 'Y';
    int sum, valid_flag;

    switch (letter)
    {
    case 'X':
        sum = 0;
        break;
    
    case 'Z':
        valid_flag = 1;
        break;
    
    case 'A':
        sum = 1;
        break;
    
    default:
        printf("Unknown letter -->%c\n", letter);
        break;
    }
    
    return 0;
}
