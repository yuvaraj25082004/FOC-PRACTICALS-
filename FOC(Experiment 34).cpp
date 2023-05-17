#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_people, additional_people, is_business, age;
    float base_price, final_price;
    
    printf("Enter the number of people staying in the room: ");
    if (scanf("%d", &num_people) != 1 || num_people < 1) {
        printf("Invalid input.\n");
        exit(1);
    }
    
    if (num_people <= 4) {
        switch(num_people) {
            case 2:
                base_price = 85.0;
                break;
            case 3:
                base_price = 90.0;
                break;
            case 4:
                base_price = 95.0;
                break;
        }
    } else {
        additional_people = num_people - 4;
        base_price = 95.0 + (6.0 * additional_people);
    }
    
    printf("Are you staying on company business? (1 for yes, 0 for no): ");
    if (scanf("%d", &is_business) != 1 || (is_business != 0 && is_business != 1)) {
        printf("Invalid input.\n");
        exit(1);
    }
    
    printf("What is your age? ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Invalid input.\n");
        exit(1);
    }
    
    final_price = base_price;
    
    if (is_business == 1) {
        final_price *= 0.8;
    } else if (age > 60) {
        final_price *= 0.85;
    }
    
    printf("The cost of the room is: $%.2f\n", final_price);
    
    return 0;
}