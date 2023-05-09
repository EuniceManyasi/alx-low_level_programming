#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *exampleone = haystack;
		char *exampletwo = needle;

		while (*exampleone == *exampletwo && *exampletwo != '\0')
		{
			exampleone++;
			exampletwo++;
		}

		if (*exampletwo == '\0')
			return (haystack);
	}

	return (0);
}
