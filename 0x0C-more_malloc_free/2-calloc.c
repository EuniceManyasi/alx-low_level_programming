#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b_char_to_copy: char to copy
 * @no_of_copies: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b_char_to_copy, unsigned int no_of_copies)
{
	unsigned int i;

	for (i = 0; i < no_of_copies; i++)
	{
		s[i] = b_char_to_copy;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @num_array_elements: number of elements in the array
 * @size_of_each_el: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int num_array_elements, unsigned int size_of_each_el)
{
	char *ptr;

	if (num_array_elements == 0 || size_of_each_el == 0)
		return (NULL);

	ptr = malloc(size_of_each_el * num_array_elements);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, num_array_elements * size_of_each_el);

	return (ptr);
}
