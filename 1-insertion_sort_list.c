#include "sort.h"

void swap(listint_t **head, listint_t *node1, listint_t *node2);
/**
 * insertion_sort - Sorts a doubly linked list of integers in ascending order
 * @list: The list to sort
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *foward, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (foward = (*list)->next; foward && foward->prev; foward = foward->next)
	{

		for (; foward && foward->prev && foward->n < foward->prev->n;
			foward = foward->prev)
		{
			temp = foward->prev;
			swap(list, temp, foward);
			print_list(*list);
			foward = foward->next;
		}
	}
}

/**
 * swap - swaps two nodes
 * @head: the head node
 * @node1: The first node
 * @node2: The second node
 * Return: void
 */
void swap(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prev, *next;

	prev = node1->prev;
	next = node2->next;

	if (prev != NULL)
		prev->next = node2;
	else
		*head = node2;

	node1->prev = node2;
	node1->next = next;
	node2->prev = prev;
	node2->next = node1;
	if (next)
		next->prev = node1;
}
