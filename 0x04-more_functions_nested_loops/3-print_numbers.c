#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char num_char;

	for (num_char = '0'; num_char <= '9'; num_char++)
	{
		_putchar(num_char);
	}
	_putchar('\n');
}

