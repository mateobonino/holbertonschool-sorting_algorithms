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
