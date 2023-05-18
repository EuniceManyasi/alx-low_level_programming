#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @str1: string to append to
 * @str2: string to concatenate from
 * @n: number of bytes from str2 to concatenate to str1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	char *ptr_s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (str1 && str1[len1])
		len1++;
	while (str2 && str2[len2])
		len2++;

	if (n < len2)
		ptr_s = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr_s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!ptr_s)
		return (NULL);

	while (i < len1)
	{
		ptr_s[i] = str1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		ptr_s[i++] = str2[j++];

	while (n >= len2 && i < (len1 + len2))
		ptr_s[i++] = str2[j++];

	ptr_s[i] = '\0';

	return (ptr_s);
}
