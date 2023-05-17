#include <stdio.h>

int main() {
    int sales[10][7];
    int totalSalesWeek = 0;
    int avgSalesPerson[10] = {0};
    int totalSalesDay[7] = {0};
    
    for (int i = 0; i < 10; i++) {
        printf("Enter sales data for Salesperson %d:\n", i + 1);
        for (int j = 0; j < 7; j++) {
            printf("Day %d: ", j + 1);
            scanf("%d", &sales[i][j]);
            totalSalesWeek += sales[i][j];
            totalSalesDay[j] += sales[i][j];
            avgSalesPerson[i] += sales[i][j];
        }
    }

    for (int i = 0; i < 10; i++) {
        avgSalesPerson[i] /= 5;  // Assuming 7 days in a week and 2 days off
    }

    printf("Average sales per salesperson:\n");
    for (int i = 0; i < 10; i++) {
        printf("Salesperson %d: $%d\n", i + 1, avgSalesPerson[i]);
    }

    printf("\nTotal sales per day:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: $%d\n", i + 1, totalSalesDay[i]);
    }

    printf("\nTotal sales for the week: $%d\n", totalSalesWeek);

    return 0;
}