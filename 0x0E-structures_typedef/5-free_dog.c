#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - legs that dogs has
  * @d: free dogs
  *
  * Return: Output
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
