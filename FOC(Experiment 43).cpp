#include <stdio.h>

#define NUM_HOURS 24
#define NUM_DAYS 14
#define MIN_EMPLOYEES 3
#define EMPLOYEES_PER_20_CUSTOMERS 1

int main() {
    int customers[NUM_HOURS][NUM_DAYS];
    int average_customers[NUM_HOURS];
    int average_employees[NUM_HOURS];
    

    for (int i = 0; i < NUM_DAYS; i++) {
        printf("Enter the number of customers for each hour of day %d:\n", i+1);
        for (int j = 0; j < NUM_HOURS; j++) {
            printf("Hour %d: ", j);
            scanf("%d", &customers[j][i]);
        }
    }
    

    for (int i = 0; i < NUM_HOURS; i++) {
        int total_customers = 0;
        for (int j = 0; j < NUM_DAYS; j++) {
            total_customers += customers[i][j];
        }
        average_customers[i] = total_customers / NUM_DAYS;
        average_employees[i] = MIN_EMPLOYEES + (average_customers[i] / 20) + (average_customers[i] % 20 != 0 ? 1 : 0);
    }
    
  
    printf("Average number of employees needed per hour:\n");
    for (int i = 0; i < NUM_HOURS; i++) {
        printf("Hour %d: %d\n", i, average_employees[i]);
    }
    
    return 0;
}