#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // Pseudo Random Numbers = A set of values or elements that are statistically random
    // Don't use these for any cryptographics security
    srand(time(0));
    int number1 = (rand() % 6) + 1;
    printf("%d", number1);
    return 0;
}