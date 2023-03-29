#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_nbr - prints numbers
 * @ap: arg list
 * Return: number of printed char
 */
int print_nbr(va_list ap)
{
	return (print_number(va_arg(ap, int)));
}

/**
 * print_percent -  print percent character
 * @args: char
 * Return: percent character
 */
int print_percent(va_list args __attribute__((unused)))
{
	return (_putchar('%'));
}
