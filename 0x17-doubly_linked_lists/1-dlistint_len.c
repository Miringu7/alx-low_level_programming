#include "lists.h"

/**
  * dlistint_len - returns the number of elements in a linked dlistint_t list.
  * @h: function parameter
  * Return: number of elements in a linked dlistint_t list
  */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t nodes_count = 0;

	while (ptr != NULL)
	{
		nodes_count++;
		ptr = ptr->next;
	}
	return (nodes_count);
}
