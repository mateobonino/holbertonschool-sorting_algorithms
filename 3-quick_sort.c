#include "sort.h"
/**
*
*
*
*/
void quick_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, pivot = 0, aux = 0;

	if (!array || !size)
		return;
	pivot = (int) size - 1;
	for (i = 0; i < r; i++)
	{
		if (array[pivot] > array[i])
		{
			swap_arr(&array[j], &array[i]);
			j++;
		}
	}
	swap_arr(&array[i], &array[pivot]);
	quick_sort_recursion()
}