#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates heap memory using malloc
 * @n: number of bytes to allocate in memory
 *
 * Return: A pointer to the allocated memory by malloc
 */
void *malloc_checked(unsigned int n)
{
	void *ptr;

	ptr = malloc(n);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
