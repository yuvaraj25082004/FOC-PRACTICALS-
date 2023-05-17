#include <stdio.h>

int main() {
    int num_students = 200;
    int total_as = 0, total_bs = 0, total_cs = 0, total_ds = 0, total_fs = 0;
    
    for (int i = 1; i <= num_students; i++) {
        int student_num, num_grade;
        printf("Enter student number and number grade for student %d: ", i);
        scanf("%d %d", &student_num, &num_grade);
        
        char letter_grade;
        if (num_grade >= 90) {
            letter_grade = 'A';
            total_as++;
        } else if (num_grade >= 78) {
            letter_grade = 'B';
            total_bs++;
        } else if (num_grade >= 65) {
            letter_grade = 'C';
            total_cs++;
        } else if (num_grade >= 50) {
            letter_grade = 'D';
            total_ds++;
        } else {
            letter_grade = 'F';
            total_fs++;
        }
        
        printf("Student %d: number grade = %d, letter grade = %c\n", student_num, num_grade, letter_grade);
    }
    
    printf("Total number of As: %d\n", total_as);
    printf("Total number of Bs: %d\n", total_bs);
    printf("Total number of Cs: %d\n", total_cs);
    printf("Total number of Ds: %d\n", total_ds);
    printf("Total number of Fs: %d\n", total_fs);
    
    return 0;
}