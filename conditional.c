#include <stdio.h>

int main()
{
    int age;

    printf("\n Enter Your Age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are now Signed Up !");
    }
    else
    {
        printf("You are not eligible");
    }
    return 0;
}