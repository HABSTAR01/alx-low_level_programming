#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: character to fill the array with.
 *
 * Return: pointer to an array of chars
 */
char *create_array(unsigned int size, char c)
{
    char *cr;
    unsigned int i;

    if (size == 0)
        return (NULL); // If the size is 0, return NULL

    cr = malloc(sizeof(c) * size); // Allocate memory for the array

    if (cr == NULL)
        return (NULL); // Check if memory allocation was successful

    for (i = 0; i < size; i++)
        cr[i] = c; // Fill the array with the specified character

    return (cr); // Return a pointer to the created array
}
