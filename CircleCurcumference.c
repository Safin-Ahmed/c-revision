#include <stdio.h>
int main()
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;
    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("The Circumference of Circle is : %lf", circumference);
    printf("The Area Of The Circle Is : %lf", area);
    return 0;
}