#include "sort.h"
/**
*
*
*
*
*/
void selection_sort(int *array, size_t size)
{
    size_t i, j, temp = 0;

    if (!array || !size)
        return;
    for (i = 0; array[i] && i < size - 1; i++)
    {
        if (array[i] > temp )
        (
            for (j = i + 1; array[j] && j < size - i - 1; j++)
            {
                if (array[i] > temp )
                {
                    temp = array[j];
                    continue;
                }
            }
        )
    }
}