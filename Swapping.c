// 5. Swapping Two Variables

#include <stdio.h>

int main() {
    int num1, num2, store_val ;

    printf("Enter two numbers to swap:\n");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d", num1, num2);

    store_val = num1;
    num2 = num1;
    num2 = store_val;

    printf("\nAfter swapping: num1 = %d, num2 = %d", num1, num2);

return 0;
}