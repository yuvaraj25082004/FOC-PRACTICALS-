#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    
    printf("Enter the age of the person: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Invalid input.\n");
        exit(1);
    }
    
    if (age < 3) {
        printf("Free\n");
    } else if (age >= 3 && age <= 12) {
        printf("$5.00\n");
    } else if (age >= 13 && age <= 20) {
        printf("$10.00\n");
    } else if (age >= 21 && age <= 54) {
        printf("$15.00\n");
    } else if (age > 55) {
        printf("$10.00\n");
    } else {
        printf("Error: Age not within valid range.\n");
    }
    
    return 0;
}
