#include <stdio.h>
enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};
int main()
{
    // enum = a user defined type of named integer identifiers
    //        helps to make a program readable
    enum Day today = Mon;
    if (today == Sun || today == Sat)
    {
        printf("Today is weekend! It's Party Time");
    }
    else
    {
        printf("You have to work today :(");
    }
    return 0;
}