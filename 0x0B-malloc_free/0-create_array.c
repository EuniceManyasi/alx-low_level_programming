#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size arry_size and assign char c
 * @arry_size: size of array
 * @c: char to assign
 * Description: creates array of chars,initializes it with a specific char
 * Return: pointer to array, NULL if fails
 *
 */
char *create_array(unsigned int arry_size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * arry_size);
	if (arry_size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < arry_size; i++)
		str[i] = c;
	return (str);
}
