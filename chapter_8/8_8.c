// A program that prompts for five quiz grades for five students and computes the total score, average score high score, and low score

#include <stdio.h>

int main(void)
{
    int student_grades[5][5];
    int i, j, sum, high_score, low_score;

    // Scans the input for each student's quizzes results
    for (i = 0; i < 5; ++i) {
        printf("Enter student #%d's quizzes: ", i + 1);
        scanf("%d %d %d %d %d", &student_grades[i][0], &student_grades[i][1], &student_grades[i][2], &student_grades[i][3], &student_grades[i][4]);
    }

    // Prints the total score and average score of each student
    printf("Each student's scores:\n");
    for (i = 0; i < 5; ++i) {
        for (j = 0, sum = 0; j < 5; ++j) {
            sum += student_grades[i][j];
        }
        printf("Student #%d's Total score: %d | Average score: %d\n", i + 1, sum, sum / 5);
    }

    // Prints the average score, high score, and low score for every quiz
    printf("\nEach Quizzes scores:\n");
    for (j = 0; j < 5; ++j) {
        // Resets high score and low score
        high_score = 0; 
        low_score = 100; 
        for (i = 0, sum = 0; i < 5; ++i) {
            // Finds high score and low score quizzes
            if (student_grades[i][j] > high_score)
                high_score = student_grades[i][j];
            if (student_grades[i][j] < low_score)
                low_score = student_grades[i][j];
            sum += student_grades[i][j];
        }
        printf("Quiz #%d's Average score: %d | High score: %d | Low score: %d\n", j + 1, sum / 5, high_score, low_score);
    }

    return 0;
}
