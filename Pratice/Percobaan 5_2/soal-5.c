#include <stdio.h>
#include <math.h>

float konversi(int suhu, char asal, char tuj);

int main()
{
    float hasilKonversi;
    int suhu;
    char asal, tuj;
    int isValid = 1;
    
    do
    {
        printf("Masukkan suhu sumber = ");
        scanf("%d", &suhu);
        fflush(stdin);
        printf("Masukkan satuan asal = ");
        scanf("%c", &asal);
        fflush(stdin);
        printf("Masukkan satuan tujuan = ");
        scanf("%c", &tuj);
        fflush(stdin);

        if ((asal != 'C' && asal != 'F' && asal != 'R') || (tuj != 'C' && tuj != 'F' && tuj != 'R'))
        {
            isValid = 0;
            puts("Input tidak valid, harap masukkan dengan format, C, F, dan R");
        }
        else
        {
            isValid = 1;
        }
    } while (isValid == 0);
    

    hasilKonversi = konversi(suhu, asal, tuj);

    printf("Hasil konversi suhu %d %c = %g %c", suhu, asal, hasilKonversi, tuj);
    
    return 0;
}

float konversi(int suhu, char asal, char tuj) {
    float result;

    if (asal == 'C' && tuj == 'F') 
    {
        result = (9.0 / 5.0) * suhu + 32;
    } 
    else if (asal == 'C' && tuj == 'R')
    {
        result = (4.0 / 5.0) * suhu;
    }
    else if (asal == 'F' && tuj == 'C') 
    {
        result = (5.0 / 9.0) * (suhu - 32);
    }
    else if (asal == 'F' && tuj == 'R') 
    {
        result = (4.0 / 9.0) * (suhu - 32);
    }
    else if (asal == 'R' && tuj == 'C') 
    {
        result = (5.0 / 4.0) * suhu;
    }
    else if (asal == 'R' && tuj == 'F')
    {
        result = (9.0 / 4.0) * suhu + 32;
    }
    else
    {
        result = suhu;
    }

    return result;
}