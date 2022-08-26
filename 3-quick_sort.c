#include "sort.h"
/**
* quick_sort - sorts an array of integers in ascending order
* @array: the array to sort
* @size: the array size
* Return: void functino
*/
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quick_sort_recursion(array, size, 0, size - 1);
}

/**
* partition - partitions the array using the Lomuto Partition Scheme
* @array: the array
* @size: the array size
* @l: the first position
* @r: the pivot
* Return: the partition index
*/
int partition(int *array, size_t size, int l, int r)
{
	int i = 0, j = 0, pivot;

	pivot = array[r];
	i = l;
	for (j = l; j < r; j++)
	{
		if (array[j] < pivot)
		{
			if (i < j)
			{
				swap_arr(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] > pivot)
	{
		swap_arr(&array[i], &array[r]);
		print_array(array, size);
	}
	return (i);
}
/**
* quick_sort_recursion - recursive quick sort function
* @array: the array
* @size: the array size
* @l: the start index
* @r: the pivot
* Return: void function
*/
void quick_sort_recursion(int *array, size_t size, int l, int r)
{
	int j;

	if (r - l > 0)
	{
		j = partition(array, size, l, r);
		quick_sort_recursion(array, size, l, j - 1);
		quick_sort_recursion(array, size, j + 1, r);
	}
}
/**
* swap_arr - swaps to array positions
* @a: first position
* @b: second position
*/
void swap_arr(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
