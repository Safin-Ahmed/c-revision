#include <stdio.h>
int main()
{
    // A loop inside another loop
    int rows;
    int column;
    char symbol;

    printf("Enter Number of Rows: ");
    scanf("%d", &rows);

    printf("Enter Number of Columns: ");
    scanf("%d", &column);

    printf("Enter a Symbol to Use : ");
    scanf(" %c", &symbol);

    printf("%d \n", rows);
    printf("%d \n", column);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}