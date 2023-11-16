#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_element;
	unsigned int str_length = 0;

	while (str[str_length])
		str_length++;

	n_element = malloc(sizeof(list_t));
	if (n_element == NULL)
		return (NULL);

	n_element->str = strdup(str);
	n_element->len = str_length;
	n_element->next = (*head);
	(*head) = n_element;

	return (*head);
}
