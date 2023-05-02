#include "main.h"
/**
 * puts2 - print string characters
 * @str: the string input
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	j = i - 1;
	for (o = 0 ; o <= j ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
