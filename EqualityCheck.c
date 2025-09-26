// 6. Check for Equality of Two Numbers

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf("The numbers are equal.\n");
    } 
    else {
        printf("The numbers are not equal.\n");
    }

return 0;
}