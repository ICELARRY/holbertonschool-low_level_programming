#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - hesablayır string uzunluğunu
 */
int _strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

/**
 * _strcpy - stringi kopyalayır
 */
char *_strcpy(char *dest, char *src)
{
    int i;
    for (i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

/**
 * new_dog - yeni dog_t strukturunu yaradır
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    if (!name || age < 0 || !owner)
        return (NULL);

    d = malloc(sizeof(dog_t));
    if (!d)
        return (NULL);

    d->name = malloc(sizeof(char) * (_strlen(name) + 1));
    if (!d->name)
    {
        free(d);
        return (NULL);
    }
    _strcpy(d->name, name);

    d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
    if (!d->owner)
    {
        free(d->name);
        free(d);
        return (NULL);
    }
    _strcpy(d->owner, owner);

    d->age = age;

    return (d);
}
