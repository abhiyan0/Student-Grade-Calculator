#include <stdio.h>

// Function to calculate grade based on percentage
char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

int main() {
    int subjects, i;
    float marks[100], total = 0, percentage;

    // Get the number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    // Input marks for each subject
    for (i = 0; i < subjects; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    percentage = total / subjects;

    // Get grade
    char grade = calculateGrade(percentage);

    // Display results
    printf("\nTotal Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
