#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * handle_conversion - handles the specifier cases.
 * @l: character to handle;
 * @ptr: Argument list pointer;
 *
 * Return: count of characters printed.
*/
int handle_conversion(char l, va_list ptr)
{
	int ext_count = 0, tmp;

	if (l == 'c')
	{
		_putchar((char)(va_arg(ptr, int)));
		ext_count = 1;
	}
	else if (l == 's')
	{
		ext_count = printstr(va_arg(ptr, char *));
	}
	else if (l == '%')
	{
		_putchar(l);
		ext_count = 1;
	}
	else if (l == 'd' || l == 'i')
	{
		tmp = va_arg(ptr, int);
		ext_count = countnum(tmp);
		printnum(tmp);
	}
	else
	{
		/* do nothing. */
	}
	return (ext_count);
}

/**
 * _printf - prints/formats a string
 * @str: String with/without specifier to print.
 *
 * Return: Number of characters printed.
*/
int _printf(char *str, ...)
{
	int count = -1, ext_count;
	char l;
	va_list ptr;

	va_start(ptr, str);
	if (str != NULL)
	{
		count = 0;	
		while (*str && *str != '\0')
		{
			if (*str == '%')
			{
				str++;
				l = *str;
				ext_count = handle_conversion(l, ptr);
				count += ext_count;
				str++;
			}
			else
			{
				_putchar(*str);
				str++;
				count++;
			}
		}
	}
	va_end(ptr);
	_putchar('\0');
	return (count);
}
