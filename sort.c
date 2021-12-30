<<<<<<< HEAD
#include<stdio.h>
void sort(char array[], int size) {
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j + 1] = temp;
            }    
        }
    }
}
void printArray(char array[], int size){
    for(int i = 0; i < size; i++){
        printf("%c\n", array[i]);
    }
}
int main() {
    //int array[] = {1, 2, 3, 4, 5, 10, 6, 7, 8, 9};
    char array[] = {'F', 'A', 'D', 'B', 'E', 'C'};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printArray(array, size);
=======
#include <stdio.h>
void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int array[] = {9, 1, 8, 6, 5, 3, 2, 7};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printf("%d", size);
>>>>>>> 445f1bb1044a7ee4f79323650dab1436b932e170
    return 0;
}