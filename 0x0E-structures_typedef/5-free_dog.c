#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: first element
 */

void free_dog(dog_t *d)
{
	free(d);
}
