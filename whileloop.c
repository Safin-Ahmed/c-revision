#include <stdio.h>
#include <string.h>
int main()
{
    // While Loop = repeats a section of code possible unlimited times
    // while some conditions remain true
    // a while loop might not execute at all

    char name[25];
    printf("What's Your name\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("You did not enter your name!\n");
        printf("What's Your name\n");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);
    return 0;
}