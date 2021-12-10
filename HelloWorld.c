#include<stdio.h>

int main() {
    printf("I Like Pizza! \n");
    printf("It's really good!\n");
    printf("\"I Love Pizza\" - Safin Ahmed\n");

    int x ; //declaration
    x = 123; //initialization

    int y = 456; //declaration + initilization

    int age = 21; //integer
    float gpa = 2.4; // floating point
    char grade = 'C'; // Char Stores a Single Character
    char name[] = "Bro"; // Array of Characters
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your Average Grade is %c\n", grade);
    printf("Your GPA is %f\n", gpa);

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    const float pi = 3.1416;


    printf("item 1 : $%.2f\n", item1);
    printf("item 2 : $%.2f\n", item2);
    printf("item 3 : $%.2f\n", item3);

    // Arithmetic Operators 
    // + (Addition)
    // - (Substraction)
    // * (Multiplication)
    // / (Division)
    // % (Modulus)
    // ++ (Increment)
    // -- (Decrement)

    int num1 = 5;
    int num2 = 2;
    int sum = num1 + num2;

    printf("%d", sum);
    return 0;
}