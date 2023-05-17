#include <stdio.h>
#include <stdlib.h>

#define NUM_LEVELS 5
#define NUM_MAJORS 7

int main() {
    int students[NUM_LEVELS][NUM_MAJORS] = {0};
    int level, major, num_students;

    for (int i = 0; i < 1200; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Level (1-4 for undergraduate, 5 for graduate): ");
        scanf("%d", &level);

        printf("Major (0-6, or -1 if no major): ");
        scanf("%d", &major);
        students[level][major]++;
    }
    printf("\nNumber of students in each level:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Level %d: %d\n", i, students[i][0]);
    }

    printf("\nNumber of students for each major:\n");
    for (int j = 1; j <= 6; j++) {
        num_students = 0;
        for (int i = 1; i <= 4; i++) {
            num_students += students[i][j];
        }
        printf("Major %d: %d\n", j, num_students);
    }

    printf("\nNumber of students in each level for each major:\n");
    for (int j = 1; j <= 6; j++) {
        printf("Major %d:\n", j);
        for (int i = 1; i <= 4; i++) {
            printf("Level %d: %d\n", i, students[i][j]);
        }
    }

    return 0;
}