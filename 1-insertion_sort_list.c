#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swap_nodes - a function that swap nodes
 * @h: pointer pointer to the list
 * @n1: pointer pointter to the first node
 * @n2: pointer to the second node
 *
 * Return: void
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = (*n1);
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}
/**
 * insertion_sort_list - a function that sorts a doubly linked list using
 * the insertion sort method
 * @list: a double pointer to the doubly linked list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *itr, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	for (itr = (*list)->next; itr != NULL; itr = temp)
	{
		temp = itr->next;
		insert = itr->prev;
		while (insert != NULL && itr->n < insert->n)
		{
			swap_nodes(list, &insert, itr);
			print_list((const listint_t *)*list);
		}
	}
}
