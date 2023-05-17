#include <stdio.h>

int main() {
    int grades[25][5];
    int studentNumber, testNumber;

    // Input grades for each student and test
    for (int i = 0; i < 25; i++) {
        printf("Enter grades for Student %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("Test %d: ", j + 1);
            scanf("%d", &grades[i][j]);
        }
    }

    // Prompt user to enter student number and test number
    printf("\nEnter student number: ");
    scanf("%d", &studentNumber);
    printf("Enter test number: ");
    scanf("%d", &testNumber);

    // Retrieve and print the grade for the specified student and test
    int grade = grades[studentNumber - 1][testNumber - 1];
    printf("Grade for Student %d, Test %d: %d\n", studentNumber, testNumber, grade);

    return 0;
}