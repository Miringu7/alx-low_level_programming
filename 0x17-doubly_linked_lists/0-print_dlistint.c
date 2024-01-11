#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t list.
  * @h: function parameter
  * Return: the number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t nodes_count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		nodes_count++;
		ptr = ptr->next;
	}
	return (nodes_count);
}
