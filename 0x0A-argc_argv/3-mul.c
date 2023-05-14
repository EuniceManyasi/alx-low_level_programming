#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;


        if(str[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; str[i] != '\0'; ++i)
	{
	       	result = result*10 + str[i] - '0';
	}
	return sign * result;
}

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
        int result, first_number, second_number;

        if (argc < 3 || argc > 3)
        {
                printf("Error\n");
                return (1);
        }

        first_number = _atoi(argv[1]);
        second_number = _atoi(argv[2]);
        result = first_number * second_number;

        printf("%d\n", result);

        return (0);
}
