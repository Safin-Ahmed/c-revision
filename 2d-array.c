#include <stdio.h>
int main()
{
    // 2D array = an array, where each element is an entire array useful if you need a matrix, grid or table of data
    // int numbers[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}

    // };

    int numbers[2][3];
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    printf("%d", numbers[0][0]);
    return 0;
}