#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - perpetual of the dogs
  * @name: name given to the dog
  * @age: age of the dog
  * @owner: owener
  *
  * Return: output
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		cutie_dog = malloc(sizeof(dog_t));

		if (cutie_dog == NULL)
			return (NULL);

		cutie_dog->name = malloc(sizeof(char) * name_l);

		if (cutie_dog->name == NULL)
		{
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->owner = malloc(sizeof(char) * own_l);

		if (cutie_dog->owner == NULL)
		{
			free(cutie_dog->name);
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->name = _strcpy(cutie_dog->name, name);
		cutie_dog->owner = _strcpy(cutie_dog->owner, owner);
		cutie_dog->age = age;
	}

	return (cutie_dog);
}

/**
  * _strlen - printing of a string
  * @s: String of the dog
  *
  * Return: output
  */
int _strlen(char *s)
{
	int qad = 0;

	for (; *s != '\0'; s++)
	{
		qad++;
	}

	return (qad);
}

/**
  * _strcpy - print a string of the dog
  * @dest: Dest of the dog
  * @src: Source of the dog
  *
  * Return: Output
  */
char *_strcpy(char *dest, char *src)
{
	int sal;

	for (sal = 0; src[sal] != '\0'; sal++)
	{
		dest[sal] = src[sal];
	}

	dest[sal++] = '\0';

	return (dest);
}
