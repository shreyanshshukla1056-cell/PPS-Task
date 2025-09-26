#include<stdio.h>

int main(){
    
    float Maths , Physics , Chemistry , Computer , English;
    float total_marks;
    float percentage;

    printf("Enter the marks of Maths:");
    scanf("%f", &Maths);

    printf("Enter the marks of Physics:");
    scanf("%f", &Physics);

    printf("Enter the marks of Chemistry:");
    scanf("%f", &Chemistry);

    printf("Enter the marks of Computer:");
    scanf("%f", &Computer);

    printf("Enter the marks of English:");
    scanf("%f", &English);

    total_marks = Maths + Physics + Chemistry + Computer + English;

    percentage = (total_marks / 500) * 100;

    printf("Total Marks: %f\n", total_marks);
    printf("Percentage: %f\n", percentage);


    return 0;
    
    }
