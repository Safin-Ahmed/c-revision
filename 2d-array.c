#include<stdio.h>
int main () 
{
   int numbers[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
   int rows = sizeof(numbers) / sizeof(numbers[0]);
   int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);
   printf("%d\n%d", rows, columns);
   for(int i = 0; i < rows; i++){
       printf("\n");
       for(int j = 0; j < columns; j++){
           printf("%d", numbers[i][j]);
       }
   }
}