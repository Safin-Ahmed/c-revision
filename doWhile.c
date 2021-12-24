#include <stdio.h>
int main()
{
    // While Loop - checks a condition, then executes a block of code
    // Do While Loop - always executes a block of code once, then checks a condition

    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a number above 0 : ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
    } while (number > 0);
    printf("sum: %d", sum);
    return 0;
}