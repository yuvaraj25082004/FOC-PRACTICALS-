#include <stdio.h>

int main() {
    int num_courses, total_credits = 0, i;
    float grade_point, total_grade_points = 0, average;

    printf("Enter the number of courses: ");
    scanf("%d", &num_courses);

    for (i = 1; i <= num_courses; i++) {
        char grade;
        int credits;

        printf("Enter the letter grade for course %d: ", i);
        scanf(" %c", &grade);

        printf("Enter the credit hours for course %d: ", i);
        scanf("%d", &credits);

        switch (grade) {
            case 'A':
                grade_point = 4.0;
                break;
            case 'B':
                grade_point = 3.0;
                break;
            case 'C':
                grade_point = 2.0;
                break;
            case 'D':
                grade_point = 1.0;
                break;
            case 'F':
                grade_point = 0.0;
                break;
            default:
                printf("Invalid grade entered for course %d\n", i);
                grade_point = 0.0;
                credits = 0;
                break;
        }

        total_grade_points += grade_point * credits;
        total_credits += credits;
    }

    if (total_credits > 0) {
        average = total_grade_points / total_credits;
        printf("Grade average for the semester: %.2f\n", average);
    } else {
        printf("No valid courses entered\n");
    }

    return 0;
}