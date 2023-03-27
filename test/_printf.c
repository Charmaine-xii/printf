#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
* _printf - printf function
* @format: format
*
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;

	int i = 0;

<<<<<<< HEAD:_printf.c
	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			i++;

		switch (format[i])
		{
			case 'c':
			{
				int x = va_arg(args, int);

				printf("%c", x);
					break;
			}
			case's':
			{
				char *x = va_arg(args, char*);

				printf("%s", x);
				break;
			}
			case '%':
			putchar('%');
				break;
			default:
				putchar(format[i]);
				break;
=======
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
>>>>>>> 4a2e6084f79c36cf2c8c7bfe277aecaac0066009:test/_printf.c
		}
		}	
	else
	{				
		putchar(format[i]);
	}	
		i++;
	}
	
	va_end(args);

	return (0);
}
