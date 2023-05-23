#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @dog_free: struct dog to free
 */
void free_dog(dog_t *dog_free)
{
	if (dog_free)
	{
		free(dog_free->name);
		free(dog_free->owner);
		free(dog_free);
	}
}
