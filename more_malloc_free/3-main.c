#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hex
 * @buffer: address of memory to print
 * @size: size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        if (i != 0)
            printf(" ");
        printf("0x%02x", buffer[i]);
        if ((i + 1) % 10 == 0 && i != size - 1)
            printf("\n");
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    if (a == NULL)
        return (1);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
