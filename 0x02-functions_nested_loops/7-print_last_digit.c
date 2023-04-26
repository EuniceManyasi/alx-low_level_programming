#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @number: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int number)
{
	int remainder;

	if (number < 0)
	number = -number;

	remainder = number % 10;

	if (remainder < 0)
		remainder = -remainder;

	_putchar(remainder + '0');

	return (remainder);
}
