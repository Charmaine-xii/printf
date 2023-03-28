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
		{'c', print_c},
		{'s', print_s},
		{'%', print_p},
	};

	for (; i < 3; i++)
	{
		if (ops[i].c == l)
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
	int count = 0;
	/* char l; */
	va_list ptr;
	int (*func)();

	if (format == NULL)
		return (-1);

	va_start(ptr, format);
	while (*format && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			/* l = *format;
			_putchar(l); */
			func = get_func(*format);
			if (func != NULL)
			{
				count += func(ptr);
				format ++;
			}
			else
			{
				count += _putchar(*format);
				format++;
			}
		}
		else
		{
			count += _putchar(*format);
			format++;
		}
	}
	va_end(ptr);
	_putchar('\0');
	return (count);
}
