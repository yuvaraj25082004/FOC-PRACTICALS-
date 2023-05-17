#include <stdio.h>

#define NUM_DAYS 14

int main() {
    float windSpeeds[NUM_DAYS];
    float sum = 0, average, highest = 0, lowest = 0, difference;
    int highestDay, lowestDay;

    // Read the fastest wind speed for each day
    for (int i = 0; i < NUM_DAYS; i++) {
        printf("Enter the fastest wind speed for day %d: ", i + 1);
        scanf("%f", &windSpeeds[i]);

        // Calculate the sum of wind speeds
        sum += windSpeeds[i];

        // Check for the highest wind speed
        if (windSpeeds[i] > highest) {
            highest = windSpeeds[i];
            highestDay = i + 1;
        }

        // Check for the lowest wind speed
        if (i == 0 || windSpeeds[i] < lowest) {
            lowest = windSpeeds[i];
            lowestDay = i + 1;
        }
    }

    // Calculate the average wind speed
    average = sum / NUM_DAYS;

    printf("\nAverage wind speed over two weeks: %.2f\n", average);
    printf("Day with the highest wind speed: Day %d\n", highestDay);
    printf("Day with the lowest wind speed: Day %d\n", lowestDay);

    printf("\nDifference between the highest wind speed and each day's average wind speed:\n");
    for (int i = 0; i < NUM_DAYS; i++) {
        difference = highest - windSpeeds[i];
        printf("Day %d: %.2f\n", i + 1, difference);
    }

    return 0;
}