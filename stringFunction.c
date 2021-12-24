#include <stdio.h>
#include <string.h>
int main()
{
    char string1[] = "Safin";
    char string2[] = "Ahmed";
    // strlwr(string1);               // Converts a String to lowercase
    // strupr(string1);               // Converts a String to Uppercase
    // strcat(string1, string2);      // Appends String2 to the end of String1
    // strncat(string1, string2, 1);  // Appends n character from string2 to string 1
    // strcopy(string1, string2);     // This will copy string2 to string1
    //strncpy(string1, string2, 1); // This will copy n character from string2 to 1
    //strset(string1, '?'); // sets all character of a string
    // strnset(string1, 'x', 1); // sets first n character of a string
    //strrev(string1); //reverses a string

    int result = strlen(string1); // returns string length as int
    printf("%d", result);
    return 0;
}