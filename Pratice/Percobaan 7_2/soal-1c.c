#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char strAsal[100], strTujuan[100];

    puts("COPY STRING");
    puts("User defined function");

    printf("\nMasukkan sembarang kalimat:\n");
    fgets(strAsal, sizeof(strAsal), stdin);
    strAsal[strcspn(strAsal, "\n")] = '\0';

    printf("\nMelakukan copy string\n");

    strcpy(strTujuan, strAsal);

    printf("String 1 = %s\n", strAsal);
    printf("String 2 = %s\n", strTujuan);

    return 0;
}

int pjgstr(char str[100]) {
    int i = 0;

    while(str[i] != '\0') {
        i++;
    }

    return i;
}