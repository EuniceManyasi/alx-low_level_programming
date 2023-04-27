#include "main.h"
/**
 * print numbers- print 0-9
 * return: void
 */

void print_numbers(void)
{
	char num;
	for(num='0'; num<='9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
