#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated space
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string, or NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
    char *result;
    unsigned int i, j, len1 = 0, len2 = 0;

    if (s1)
    {
        while (s1[len1])
            len1++;
    }
    if (s2)
    {
        while (s2[len2])
            len2++;
    }

    result = malloc(sizeof(char) * (len1 + len2 + 1));
    if (result == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        result[i] = s1[i];
    for (j = 0; j < len2; j++)
        result[i + j] = s2[j];
    result[i + j] = '\0';

    return (result);
}
