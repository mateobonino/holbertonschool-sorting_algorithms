#include "sort.h"
/**
* insertion_sort_list - sorts a linked list of integers in ascending order
* @list: the doubly linked list
* Return: void function
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *p = (*list);

	if (!list || !*list || !(*list)->next)
		return;
	for (p = p->next; p; p = p->next)
	{
		if (p->prev->n > p->n)
		{
			swap(p, p->prev);
			print_list(*list);
			insertion_sort_list(list);
			return;
		}
	}
}
/**
* swap - swaps a doubly linked list
* @p: the actual position in the list
* @temp: the previous position
* Return: void function
*/
void swap(listint_t *p, listint_t *temp)
{
	int a = 0;

	a = p->n;
	(*(int *)&(p->n)) = temp->n;
	(*(int *)&(temp->n)) = a;
}
