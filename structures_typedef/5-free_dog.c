#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t
 * @d: pointer to the dog_t to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
