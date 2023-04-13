#include "main.h"
#include <stdlib.h>

/**
 * _puts - prints a string , followed by a new line ,
 *
 * @str: pointer to the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to an integer.
 *
 * @s: char type string
 *
 * Return: integer converted
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
			sign *= -1;
	}
}

/**
 * main - print the result of the multiplication, followed a new line
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0;
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}