#include <stdio.h>

int main()
{
    float celcius, farenheit;

    printf("Masukkan suhu celcius: ");
    scanf("%f", &celcius);

    farenheit = celcius * 1.8 + 32;

    printf("Hasil konversi suhu %g celcius ke farenheit adalah = %g", celcius, farenheit);
    
    return 0;
}
