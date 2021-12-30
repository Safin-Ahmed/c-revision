#include <stdio.h>
int main()
{
    // FILE *pF = fopen("test.txt", "a");
    // fprintf(pF, "Aluuuu!");
    // fclose(pF);
    if (remove("test.txt") == 0)
    {
        printf("That file removed successfully!");
    }
    else
    {
        printf("that file was deleted!");
    }
    return 0;
}