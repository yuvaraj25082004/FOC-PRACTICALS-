#include <stdio.h>

#define NUM_DEPARTMENTS 12

int main() {
    int departmentCount[NUM_DEPARTMENTS] = {0};
    int womenCount[NUM_DEPARTMENTS] = {0};
    int menCount[NUM_DEPARTMENTS] = {0};
    double totalWagesWomen = 0.0;
    double totalWagesMen = 0.0;
    int totalAgeWomen[NUM_DEPARTMENTS] = {0};
    int totalAgeMen[NUM_DEPARTMENTS] = {0};

    int n, gender, department, age;
    double wage;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Gender (0 for female, 1 for male): ");
        scanf("%d", &gender);
        printf("Wage: ");
        scanf("%lf", &wage);
        printf("Department (1-12): ");
        scanf("%d", &department);
        printf("Age: ");
        scanf("%d", &age);

        departmentCount[department - 1]++;

        if (gender == 0) { 
            womenCount[department - 1]++;
            totalWagesWomen += wage;
            totalAgeWomen[department - 1] += age;
        } else { 
            menCount[department - 1]++;
            totalWagesMen += wage;
            totalAgeMen[department - 1] += age;
        }
    }

    printf("\n--- Analysis Results ---\n");
    printf("Average wage of women: %.2lf\n", totalWagesWomen / n);
    printf("Average wage of men: %.2lf\n", totalWagesMen / n);

    printf("\nTotal number of employees in each department:\n");
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        printf("Department %d: %d employees\n", i + 1, departmentCount[i]);
    }

    printf("\nNumber of women and men in each department:\n");
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        printf("Department %d:\n", i + 1);
        printf("Women: %d\n", womenCount[i]);
        printf("Men: %d\n", menCount[i]);
    }

    printf("\nAverage age of women and men in each department:\n");
    for (int i = 0; i < NUM_DEPARTMENTS; i++) {
        printf("Department %d:\n", i + 1);
        printf("Average age of women: %.2lf\n", (double)totalAgeWomen[i] / womenCount[i]);
        printf("Average age of men: %.2lf\n", (double)totalAgeMen[i] / menCount[i]);
    }

    return 0;
}