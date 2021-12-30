#include <stdio.h>
void printAge(int age)
{
    printf("You are %d years old", age);
}
int main()
{
    // Pointer = a "variable-like" reference that holds a memory address to another variable and some tasks are performed easily with pointers

    // * = indirection operator (value at address)

    int age = 21;
    int *pAge = &age;

    //printf("address of age: %p\n", &age);
    //printf("address of pAge: %p\n", pAge);

    // printf("The size of age is %d bytes\n", sizeof(age));
    //printf("The size of pAge is %d bytes\n", sizeof(pAge));

    // printf("Value of age %d\n", age);
    //printf("Value of pAge %d\n", *pAge);
    printAge(age);
    return 0;
}