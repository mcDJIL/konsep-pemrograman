#include <stdio.h>

void menu();

int main()
{
    int n;
    printf("Masukkan jumlah perulangan: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        menu();
    }
    
    
    return 0;
}

void menu() {
    puts("Pilihan Menu");
}