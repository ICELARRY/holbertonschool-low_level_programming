#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of a string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && s[len])
		len++;
	return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	name_copy = malloc(_strlen(name) + 1);
	if (!name_copy)
	{
		free(d);
		return (NULL);
	}
	owner_copy = malloc(_strlen(owner) + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}

	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
