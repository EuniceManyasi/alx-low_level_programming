#include "main.h"
/**
 * print_rev - print reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int count = 0;
	int o;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (o = count; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
