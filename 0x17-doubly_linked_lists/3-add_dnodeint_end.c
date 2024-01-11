#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  * @head: list head
  * @n: node data 
  * Return: address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = ptr;
		ptr->prev = last;
	}
	return (ptr);
}
