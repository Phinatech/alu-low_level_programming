#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t structure
 * @d: pointer to the dog_t structure to free
 *
 * Description: Frees all allocated memory for a dog,
 * including name, owner, and the structure itself.
 * If @d is NULL, the function does nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
