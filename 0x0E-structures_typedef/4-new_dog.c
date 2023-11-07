#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Description: longer description
 * Return: returns dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
