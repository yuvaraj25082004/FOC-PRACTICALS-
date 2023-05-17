#include <stdio.h>

int main() {
    int correct_scores[20];
    int student_ids[35];
    int num_correct[35];
    char grades[35];
    int best_score = 0;
    
    // Prompt the user to enter the correct answers for the test
    printf("Enter the correct answers for the test:\n");
    for (int i = 0; i < 20; i++) {
        printf("Question %d: ", i+1);
        scanf("%d", &correct_scores[i]);
    }
    
    // Prompt the user to enter each student's ID and test answers, and calculate their number of correct answers
    for (int i = 0; i < 35; i++) {
        printf("Enter the student ID for student %d: ", i+1);
        scanf("%d", &student_ids[i]);
        num_correct[i] = 0;
        for (int j = 0; j < 20; j++) {
            printf("Enter the answer for question %d for student %d: ", j+1, i+1);
            int answer;
            scanf("%d", &answer);
            if (answer == correct_scores[j]) {
                num_correct[i]++;
            }
        }
        if (num_correct[i] > best_score) {
            best_score = num_correct[i];
        }
    }
    
    // Determine each student's grade based on their number of correct answers and the best score in the class
    for (int i = 0; i < 35; i++) {
        if (num_correct[i] >= best_score) {
            grades[i] = 'A';
        } else if (num_correct[i] >= best_score - 2) {
            grades[i] = 'B';
        } else if (num_correct[i] >= best_score - 4) {
            grades[i] = 'C';
        } else if (num_correct[i] >= best_score - 6) {
            grades[i] = 'D';
        } else {
            grades[i] = 'F';
        }
    }
    
    // Display each student's ID, number correct, and grade, along with the highest score in the class
    printf("Highest score: %d\n", best_score);
    for (int i = 0; i < 35; i++) {
        printf("Student %d: %d correct, grade %c\n", student_ids[i], num_correct[i], grades[i]);
    }
    
    return 0;
}