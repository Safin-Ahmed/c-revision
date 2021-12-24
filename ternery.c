#include <stdio.h>
int findMax(int x, int y)
{
    return (x > y) ? x : y;
}
int main()
{
    // ternery operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false

    int max = findMax(6, 4);
    printf("%d", max);
    return 0;
}