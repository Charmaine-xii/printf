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
	int count = 0, ext_count, tmp;
	char l;
	va_list ptr;

	va_start(ptr, format);
	while (*format && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				l = va_arg(ptr, int);
				_putchar(l);
				count++;
				break;

			case 's':
				ext_count = printstr(va_arg(ptr, char *));
				count += ext_count;
				break;

			case '%':
				_putchar(*format);
				count++;
				break;

			case 'd':
				tmp = va_arg(ptr, int);
				ext_count = countnum(tmp);
				printnum(tmp);
				count += ext_count;
				break;

			case 'i':
				tmp = va_arg(ptr, int);
				ext_count = countnum(tmp);
				printnum(tmp);
				count += ext_count;
				break;

			default:
				break;
			}
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			count++;
		}
	}
	va_end(ptr);
	_putchar('\0');
	return (count);
}
