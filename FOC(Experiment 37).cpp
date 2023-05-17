#include<stdio.h>

int main() {
float initial_price, sales_tax_percentage, total_cost;
total_cost = 0;
printf("Enter the initial price of the car: ");
scanf("%f", &initial_price);

printf("Enter the sales tax percentage: ");
scanf("%f", &sales_tax_percentage);

total_cost += initial_price;

for(int i=1; i<=10; i++) {
    float accessory_price;
    char accessory_choice;

    printf("Enter the price of accessory %d: ", i);
    scanf("%f", &accessory_price);

    printf("Do you want to buy accessory %d? (Y/N): ", i);
    scanf(" %c", &accessory_choice);

    if(accessory_choice == 'Y' || accessory_choice == 'y') {
        total_cost += accessory_price;
    }
}

float sales_tax_amount = (sales_tax_percentage/100.0) * total_cost;
total_cost += sales_tax_amount;

printf("The total cost of the car is: %.2f\n", total_cost);

return 0;
}