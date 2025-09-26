//  Sum of all numbers 

#include <stdio.h>

int main(){

    int last_num ,sum;
    
    printf("Enter the no upto which you want sum :");
    scanf("%d",&last_num);

    sum = last_num * (last_num+1) / 2;
    printf("The sum is : %d", sum);

    return 0;
}