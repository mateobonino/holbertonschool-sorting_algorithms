#include "sort.h"

void swap_quicksort(int *a, int *b);
int particion(int *array, int izquierda, int derecha);

/**
*
*
*
*/
void quick_sort(int *array, size_t size)
{
	int indice_particion;

<<<<<<< HEAD
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
=======
	if(array[0] < (int)size - 1)
		indice_particion = particion(array, array[0], size);

	print_array((const int *)array, size);
	quick_sort(array, indice_particion);
	quick_sort(&array[indice_particion], size - 1);
}





void swap_quicksort(int *a, int *b)
{
	int temporal = *a;
	*a = *b;
	*b = temporal;
}



int particion(int *array, int izquierda, int derecha)
{
	int pivote = array[izquierda];

	while (1)
	{
		while(array[izquierda] < pivote)
		{
			izquierda++;
		}
		while(array[derecha] > pivote)
		{
			derecha--;
		}
		if (izquierda >= derecha)
		{
			return (derecha);
		}
		else
		{
			swap_quicksort(&array[izquierda], &array[derecha]);
			izquierda++;
			derecha--;
		}
	}
}
>>>>>>> c4a67ef27aac6b4ee533e1ce177561a24f6c31a6
