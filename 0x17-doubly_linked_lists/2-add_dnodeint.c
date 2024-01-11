#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
  * @head: list head
  * @n: node data
  * Return: address of the new element or NULL if failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	ptr->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = ptr;
		ptr->next = *head;
	}
	else
		ptr->next = NULL;

	*head = ptr;
	return (ptr);
}
