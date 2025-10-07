#include <stdio.h>

int main()
{
    char ch;

    printf("Ketikkan karakter terus (tekan enter untuk berhenti): ");

    while (1)
    {
        ch = getchar();

        if (ch == '\n') {
            break;
        }

        printf("Anda mengetik: %c\n", ch);
    }

    printf("Program selesai.\n");
    
    return 0;
}
