//Switch statement.

#include <stdio.h>
int main(){

    int operand1 ,operand2 ,result;

    printf("Enter Operand 1 :");
    scanf("%d",&operand1);

    char operator;
    printf("Enter the Operator :");
    scanf(" %c",&operator);

    printf("Enter Operand 2 :");
    scanf("%d",&operand2);

    switch(operator){

        case '+':
        printf("%d + %d = %d" , operand1, operand2, operand1+operand2);
        break;

        case '-':
        printf("%d - %d = %d" , operand1, operand2, operand1-operand2);
        break;

        case '*':
        printf("%d * %d = %d" , operand1, operand2, operand1*operand2);
        break;

        case '/':
        printf("%d / %d = %d" , operand1, operand2, operand1/operand2);
        break;

    }

    return 0;
}