#include <stdio.h>
#include "main.h"

/**
 * main - check the code for set_bit function
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int nb = 1024;
    int n;

    n = set_bit(&nb, 10);
    printf("%d\n", n);        // Should print 1 if success
    printf("%lu\n", nb);      // New value of nb

    n = set_bit(&nb, 5);
    printf("%d\n", n);
    printf("%lu\n", nb);

    n = set_bit(&nb, 100);
    printf("%d\n", n);        // Should print -1 (error)

    return (0);
}
