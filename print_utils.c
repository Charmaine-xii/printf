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
	{
		_putchar(*str++);
		count++;
	}

	return (count);
}

/**
 * printnum - prints an integer
 * @n: Integer to be printed.
 *
 * Return: void.
*/
void printnum(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		printnum(n / 10);

	if (n != 0)
		_putchar((n % 10) + '0');
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
