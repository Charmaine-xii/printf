#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints/formats a string
 * @str: String with/without specifier to print.
 *
 * Return: Number of characters printed.
*/
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list ptr;

	va_start(ptr, format);
	if (format == NULL)
		return (-1);
	while (format[i] && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				count += _putchar(va_arg(ptr, int));
				break;

			case 's':
				count += printstr(va_arg(ptr, char *));
				break;

			case '%':
				count += _putchar(format[i + 1]);
				break;

			case 'd':
				count += printnum(va_arg(ptr, int));
				break;

			case 'i':
				count += printnum(va_arg(ptr, int));
				break;

			default:
				count += _putchar(format[i]);
				count += _putchar(format[i + 1]);
				break;
			}
			i += 2;
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
