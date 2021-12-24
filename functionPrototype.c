#include <stdio.h>
void hello(char[], int);
int main()
{
    // Function Prototype
    // What is it?
    /* 
        Function Declaration without a body, before main () and Ensures that calls to a function are made with the correct arguments
    */

    char name[] = "Safin Ahmed";
    int age = 21;
    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\n You are %d years old", age);
}