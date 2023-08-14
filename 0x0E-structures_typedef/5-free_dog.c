#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog - free the dog
 * @d: the struct to free
 *
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
