#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char buffer[100];
    char character;
    int valid;

    do {
        valid = 1;

        printf("Masukkan karakter: ");
        fgets(buffer, sizeof(buffer), stdin);

        buffer[strcspn(buffer, "\n")] = '\0';

        if (strlen(buffer) != 1) {
            printf("Input tidak valid! Harus 1 karakter saja.\n");
            valid = 0;
        } else {
            character = buffer[0];

            if (isdigit(character)) {
                printf("Input tidak valid! Tidak boleh angka.\n");
                valid = 0;
            }
        }

    } while (!valid);

    printf("Karakter yang anda masukkan adalah = %c\n", character);

    return 0;
}
