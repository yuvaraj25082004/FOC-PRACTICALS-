#include <stdio.h>

int main() {
    float totalGallons = 0, totalMiles = 0, mpg;
    int startingMileage, endingMileage, gallons;
    
    for (int i = 1; i <= 6; i++) {
        printf("Fillup #%d\n", i);
        printf("Starting mileage: ");
        scanf("%d", &startingMileage);
        printf("Ending mileage: ");
        scanf("%d", &endingMileage);
        printf("Gallons used: ");
        scanf("%d", &gallons);
        
        totalGallons += gallons;
        totalMiles += endingMileage - startingMileage;
        
        mpg = totalMiles / totalGallons;
        printf("MPG for fillup #%d: %.2f\n\n", i, (float) (endingMileage - startingMileage) / gallons);
    }
    
    printf("Total MPG over 6 fillups: %.2f\n", mpg);
    
    return 0;
}