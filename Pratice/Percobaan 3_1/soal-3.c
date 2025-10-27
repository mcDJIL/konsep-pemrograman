#include <stdio.h>

int main()
{
    float diskon = 0, finalPrice;
    float price;

    printf("Masukkan total pembelian anda: ");
    scanf("%f", &price);

    if (price >= 100000.f) {
        finalPrice = price * 0.95f;

        printf("Total pembelian anda setelah diskon 10 adalah Rp. %g", finalPrice);
    } else {
        printf("Total pembelian adalah Rp. %d\n", price);
        printf("Anda tidak mendapatkan diskon");
    }
    
    return 0;
}
