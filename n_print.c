#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * *get_func - gets the appropriate function based on the char input
 * @l: Input character
 *
 * Return: Pointer to appropriate function
 */
int (*get_func(const char l))(va_list)
{
	int i = 0;

	f_ops ops[] = {
		{"d", print_i},
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"%", print_p},
	};

	for (; i < 5; i++)
	{
		if (ops[i].c[0] == l)
			return (ops[i].f);
	}

	/** if all else fails... */
	return (NULL);
}

/**
 * _printf - prints/formats a string
 * @format: String with/without specifier to print.
 *
 * Return: Number of characters printed.
*/
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list ptr;
	int (*func)();

	if (format == NULL)
		return (-1);

	va_start(ptr, format);
	while (format[i] && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			func = get_func(format[i + 1]);
			if (func != NULL)
			{
				count += func(ptr);
				i += 2;
			}
			else
			{
				count += _putchar(*format);
				i++;
			}
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	}
	va_end(ptr);
	_putchar('\0');
	return (count);
}
