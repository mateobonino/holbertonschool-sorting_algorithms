#include "sort.h"
/**
* selection_sort - sorts an array of integers in ascending order
* @array: the array
* @size: the array size
* Return: void function
*/
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min = 0, print = 0;

	if (!array || !size)
		return;
	for (i = 0; array[i] && i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; array[j] && j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
				print = 1;
			}
		}
		swap_array(&array[i], &array[min]);
		if (print)
			print_array(array, size);
		print = 0;
	}
}
/**
* swap_array - swaps an array
* @a: the first position
* @b: the second position
* Return: void function
*/
void swap_array(int *a, int *b)
{
	unsigned int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
