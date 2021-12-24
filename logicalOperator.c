#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operators = && (AND) checks if two conditons are true.
    // logical operators = ! (NOT) 
    float temp = 25;
    bool sunny = 1;
    if (temp >= 0 && temp <= 30 && sunny)
    {
        printf("The Weather Is Good!");
    }
    else
    {
        printf("The Weather Is Bad!");
    }
    return 0;
}