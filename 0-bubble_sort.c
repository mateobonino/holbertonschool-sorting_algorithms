#include "sort.h"
/**
* bubble_sort - sorts an array of integers in ascending order
* @array: the array to sort
* @size: the array size
* Return: void function
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, temp = 0;

	if (array)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
	else
	{
		return;
	}
}
