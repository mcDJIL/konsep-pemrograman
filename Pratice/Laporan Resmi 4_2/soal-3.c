#include <stdio.h>

int main()
{
    int totalChar = 0, totalSpace = 0, totalNumber = 0, totalLowercase = 0, totalUppercase = 0;
    char ch;

    printf("Ketikkan sembarang kalimat: ");
    
    while ((ch = getchar()) != '\n')
    {
        totalChar++;

        if (ch == ' ') {
            totalSpace++;
        } else if (ch >= '0' && ch <= '9') {
            totalNumber++;
        } else if (ch >= 'a' && ch <= 'z') {
            totalLowercase++;
        } else if (ch >= 'A' && ch <= 'Z') {
            totalUppercase++;
        }
    }
    
    printf("Jumlah karakter = %d\n", totalChar);
    printf("Jumlah spasi = %d\n", totalSpace);
    printf("Jumlah angka = %d\n", totalNumber);
    printf("Jumlah huruf kecil = %d\n", totalLowercase);
    printf("Jumlah huruf besar = %d", totalUppercase);
    
    return 0;
}
