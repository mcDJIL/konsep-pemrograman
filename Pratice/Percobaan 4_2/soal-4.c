#include <stdio.h>

int main()
{
    int totalChar = 0, totalSpace = 0;
    char ch;

    printf("Ketikkan sembarang kalimat: ");
    
    while ((ch = getchar()) != '\n')
    {
        totalChar++;

        if (ch == ' ') {
            totalSpace++;
        }
    }
    
    printf("Jumlah karakter = %d\n", totalChar);
    printf("Jumlah spasi = %d", totalSpace);
    
    return 0;
}
