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
    return 0;
}