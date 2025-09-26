// 10. Percentage and Grades of Marks

#include <stdio.h>

int main() {
    float maths , physics , chemistry , computer , english;
    float percentage;

    printf("Enter marks for 5 subjects :\n");
    scanf("%f %f %f %f %f", &maths , &physics , &chemistry , &computer , &english);

    percentage = (maths + physics + chemistry + computer + english) / 5.0;

    printf("The percentage is: %f\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}