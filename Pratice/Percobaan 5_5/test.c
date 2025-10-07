#include <stdio.h>

main()
{
    register int i;
    int jumlah = 0;

    for (i = 1; i <= 1000000; i++)
        jumlah = jumlah + i;

    printf("1 + 2 + 3 + ... + 1000000 = %d\n\n", jumlah);
}