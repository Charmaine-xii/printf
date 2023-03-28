#include <stdio.h>
#include "main.h"

/**
 * printstr - prints a string.
 * @str: The string to be printed.
 *
 * Return: Length of string printed.
*/
int printstr(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";
	while (*str && *str != '\0')
		count += _putchar(*str++);

	return (count);
}

/**
 * printnum - prints an integer
 * @n: Integer to be printed.
 *
 * Return: void.
*/
int printnum(int n)
{
	int i = 0;

	if (n < 0)
	{
		i += _putchar('-');
		n = -n;
	}

	if (n == 0)
		i += _putchar('0');

	if (n / 10)
		i += printnum(n / 10);

	if (n != 0)
		i += _putchar((n % 10) + '0');

	return (i);
}

/**
 * countnum - counts how many characters are in an integer
 * @n: Input integer.
 *
 * Return: count of integers.
*/
int countnum(int n)
{
	int count = 0, num;

	num = n;

	if (num < 0)
	{
		count++;
		num = -num;
	}

	while (1)
	{
		count++;
		num = num / 10;
		if (num == 0)
			break;
	}

	return (count);
}
