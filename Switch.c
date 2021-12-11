#include<stdio.h>
int main () {
    // Switch - A more efficient way to using many else if statements allows a value to be tested for equality against many cases.

    char grade;
    printf("Enter The Grade : ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect\n");
            break;
        case 'B':
            printf("You Did Good\n");
            break;
        case 'C':
            printf("You Did Okay\n");
            break;
        case 'D':
            printf("At least it is not F");
            break;
        case 'F':
            printf("You are Failed");
            break;
        default:
            printf("Please Enter A Valid Grade");
            break;
        
    } 
    return 0;
}