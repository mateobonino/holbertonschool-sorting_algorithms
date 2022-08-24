#include "sort.h"

void quick_sort(int *array, size_t size)
{
	int pivot = 0;
	if (!array || !size)
		return;
	pivot = (int) size - 1;
	sort_recu(array, 0, pivot, size);
}

void sort_recu(int *array, int beg, int pivot, size_t size)
{
	int i, j = 0, print = 0;

	for (i = beg; i < pivot; i++)
	{
		if (array[i] < array[pivot])
		{
			swap_arr(&array[j], &array[i]);
			print = 1;
			j++;
		}
	}
	swap_arr(&array[j], &array[pivot]);
	if (print)
		print_array(array, size);
	sort_recu(array, beg, j - 1, size);
	sort_recu(array, j + 1, pivot, size);
}
void swap_arr(int *a, int *b)
{
	int temp = 0;
	
	temp = *a;
	*a = *b;
	*b = temp;
}