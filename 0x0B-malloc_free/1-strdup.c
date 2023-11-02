#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
    char *strout;
    unsigned int i, j;

    if (str == NULL)
        return (NULL);

    for (i = 0; str[i] != '\0'; i++)
        ; // Calculate the length of the input string

    strout = (char *)malloc(sizeof(char) * (i + 1)); // Allocate memory for the copy

    if (strout == NULL)
        return (NULL); // Check if memory allocation was successful

    for (j = 0; j <= i; j++)
        strout[j] = str[j]; // Copy the characters from the original string

    return (strout); // Return the newly allocated copy of the string
}
