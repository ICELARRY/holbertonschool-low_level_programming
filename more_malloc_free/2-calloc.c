#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, initializes all bytes to 0
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory or NULL if failure or nmemb/size is 0
 */
void	*_calloc(unsigned int nmemb, unsigned int size)
{
	char	*ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
