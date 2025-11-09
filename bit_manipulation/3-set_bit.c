#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1
 * @n: Pointer to the number to modify
 * @index: The index of the bit to set (starting from 0)
 *
 * Return: 1 if successful, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
