#include <stdio.h>

int main() {
    float price, salePrice;

    printf("Enter the original price of the item: $");
    scanf("%f", &price);

    salePrice = price;

    printf("Original price: $%.2f\n", price);

    for (int day = 1; day <= 5; day++) {
        salePrice = salePrice * 0.9;
        printf("Sale price on day %d: $%.2f\n", day, salePrice);
    }

    return 0;
}