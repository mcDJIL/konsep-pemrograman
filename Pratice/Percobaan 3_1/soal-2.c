#include <stdio.h>

int main()
{
    float diskon = 0, finalPrice;
    int price;

    printf("Masukkan total pembelian anda: ");
    scanf("%d", &price);

    if (price >= 100000) {
        diskon = price * 0.05;
        finalPrice = price - diskon;

        printf("Total pembelian adalah Rp. %g", finalPrice);
    } else {
        printf("Total pembelian adalah Rp. %d", price);
    }
    
    return 0;
}
