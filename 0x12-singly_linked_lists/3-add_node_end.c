#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_element;
	list_t *temp = *head;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	n_element = malloc(sizeof(list_t));
	if (!n_element)
		return (NULL);

	n_element->str = strdup(str);
	n_element->len = str_len;
	n_element->next = NULL;

	if (*head == NULL)
	{
		*head = n_element;
		return (n_element);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = n_element;

	return (n_element);
}
