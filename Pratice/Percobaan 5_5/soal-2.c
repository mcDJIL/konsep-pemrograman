#include <stdio.h>

float f_to_i(float feet);
float i_to_cm(float inch);
float c_to_m(float centi);

int main()
{
    float feet, inch, centi, meter;

    printf("Masukkan ukuran dalam satuan kaki: ");
    scanf("%f", &feet);
    fflush(stdin);

    inch = f_to_i(feet);
    centi = i_to_cm(inch);
    meter = c_to_m(centi);

    printf("Hasil konversi satuan kaki %g, ke satuan meter adalah = %g", feet, meter);
    
    return 0;
}

float f_to_i(float feet)
{
    float inch;

    inch = feet * 12.f;

    return inch;
}

float i_to_cm(float inch)
{
    float centi;

    centi = inch * 2.54f;

    return centi;
}

float c_to_m(float centi)
{
    float meter;

    meter = centi / 100.f;

    return meter;
}