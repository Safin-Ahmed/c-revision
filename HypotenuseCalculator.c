#include <stdio.h>
#include <math.h>

int main()
{
    double A;
    double B;
    double C;
    printf("Enter the Side A : ");
    scanf("%lf", &A);
    printf("Enter the Side B : ");
    scanf("%lf", &B);

    C = sqrt((A * A) + (B * B));

    printf("The Side C : %lf", C);
    return 0;
}