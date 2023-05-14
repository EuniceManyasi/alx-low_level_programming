
#include <stdio.h>
#include "main.h"

/**
 * main - Print the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;/*Unused parameter hence ignore*/
	printf("argc =%d\n", argc);

	return (0);
}
