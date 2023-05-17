#include <stdio.h>

int main() {
    int usage;
    float water_bill;
    
    printf("Enter the number of cubic feet of water used: ");
    scanf("%d", &usage);
    
    if (usage <= 1000) {
        water_bill = 15.00;
    } else if (usage <= 2000) {
        water_bill = (usage - 1000) * 0.0175 + 15.00;
    } else if (usage <= 3000) {
        water_bill = (usage - 2000) * 0.02 + 32.50 ;
    } else {
        water_bill = 70.00;
    }
    
    printf("The water bill is: $%.2f\n", water_bill);
    
    return 0;
}