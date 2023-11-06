#ifndef _MAIN_H
#define _MAIN_H

/**
  * struct dog - Dog description
  * @name: The name given of the dog.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
  *
  * Description: The structure of a dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
