#include <stdio.h>

int main(int argc, char const *argv[])
{
    char teks[10], i = 0, pjg;

    fgets(teks, sizeof(teks), stdin);

    while (teks[i] != '\0' && teks[i] != '\n')
    {
        printf("i = %d\n", i);
        i++;
    }

    pjg = i;

    printf("Pnajgan karakter adlah = %d", pjg);

    return 0;
}
