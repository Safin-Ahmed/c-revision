#include<stdio.h>
#include<ctype.h>
int main () {
    char unit;
    float temp;
    printf("Is the temparature in F or C?");
    scanf("%c", &unit);
    unit = toupper(unit);
    if(unit == 'C'){
        printf("\nEnter the temparature in Celcius : ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The Temparature in Ferenheight is %.1f F", temp);
    }
    else if(unit == 'F'){
        printf("Enter The Temparature In Ferenheight: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temp in Celsius is %.1f C", temp);
    }
    else {
        printf("%c is not a valid unit", unit);
    }
    return 0;
}