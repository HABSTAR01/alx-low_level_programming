#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * If malloc fails, the program exits with status value 98.
 */
void *malloc_checked(unsigned int b)
{
    void *p;

    p = malloc(b);
    if (p == NULL)
    {
        exit(98); // If malloc fails, exit the program with status 98
    }
    return (p);
}
