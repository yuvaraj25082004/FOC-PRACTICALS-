#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_TESTS 4

int main() {
    char studentNames[MAX_STUDENTS][50];
    int testScores[MAX_STUDENTS][MAX_TESTS];
    int numStudents;

    printf("Enter the number of students (up to %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    printf("Enter the student names and test scores:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d name: ", i + 1);
        scanf(" %[^\n]s", studentNames[i]);

        for (int j = 0; j < MAX_TESTS; j++) {
            printf("Test %d score: ", j + 1);
            scanf("%d", &testScores[i][j]);
        }
    }

    char searchName[50];
    printf("\nEnter a student name to search: ");
    scanf(" %[^\n]s", searchName);

    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(studentNames[i], searchName) == 0) {
        	
            printf("Student Name: %s\n", studentNames[i]);
            printf("Test Scores: ");
            for (int j = 0; j < MAX_TESTS; j++) {
                printf("%d ", testScores[i][j]);
            }
            printf("\n");

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student name not found.\n");
    }

    return 0;
}