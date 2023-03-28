#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_c - handles the %c format
 * @ptr: The argument pointer.
 *
 * Return: count of characters printed
 */
int print_c(va_list ptr)
{
	return (_putchar(va_arg(ptr, int)));
}

/**
 * print_s - handles the %s format
 * @ptr: The argument pointer.
 *
 * Return: count of characters printed
 */
int print_s(va_list ptr)
{
	int count = printstr(va_arg(ptr, char *));

	return (count);
}

/**
 * print_p - handles the %% format
 * @ptr: The argument pointer.
 *
 * Return: count of characters printed
 */
int print_p(va_list ptr)
{
	return (print_c(ptr));
}

/**
 * print_i - handles the %i format
 * @ptr: The argument pointer.
 *
 * Return: count of characters printed
 */
int print_i(va_list ptr)
{
	return (printnum(va_arg(ptr, int)));
}
