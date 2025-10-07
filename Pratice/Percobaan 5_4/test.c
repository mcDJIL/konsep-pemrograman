#include <stdio.h>

int main(int argc, char const *argv[])
{
    static int x = 5;

    x++;

    printf("X adalah = %d", ++x);

    return 0;
}
