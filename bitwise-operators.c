#include <stdio.h>
int main()
{
    // BITWISE OPERATORS : special operators used in bit level programming
    // (Knowing Binary is Important for this topic)
    // & = AND
    // | = OR
    // ^ = XOR
    // << = Left Shift
    // >> = Right Shift

    int x = 6;  // 6 = 00000110
    int y = 12; // 12 =00001100
    int z = 0;  // 4 = 00011110

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);
    return 0;
}