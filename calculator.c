#include<stdio.h>
int main () {
    char operator;
    double num1;
    double num2;
    double result;
    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter Number 1: ");
    scanf("%lf", &num1);
    printf("Enter Number 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\n Result  is %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n Result  is %.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n Result  is %.2lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\n Result  is %.2lf", result);
            break;
        default: 
            printf("%c operator is not valid", operator);
    }
    return 0;
}