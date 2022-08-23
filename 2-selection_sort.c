#include "sort.h"
/**
*
*
*
*
*/
void selection_sort(int *array, size_t size)
{
    size_t i, j, temp;

    if (!array || !size)
        return;
    for (i = 0; array[i] && i < size - 1; i++)
    {
        for (j = i + 1; array[j] && j < size - i - 1; j++)
        {
            if (array[i] > array[j] && array[i] > temp )
            {
                temp = array[j];
                continue;
            }
        }
    }
}