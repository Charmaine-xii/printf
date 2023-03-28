#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void printf(char *,...);
c
/**
* _printf - printf function
* @format: format
*
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++; /*skip the % */
			switch (*format)
			{
				case 'c':
				{
					char c = va_arg(args, int);

					putchar(c);
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char *);

					fputs(s, stdout);
					break;
				}
				case '%':
				{
					putchar('%');
					break;
				}
				default:
				{
					/* unknown format specifier*/
					putchar('%');
					putchar(*format);
					break;
				}
			}
		} else
		{
			putchar(*format);
		}
		format++;
	}

	va_end(args);

	return (0);
}

/** 
 * main - entry point 
 *
 * Return: 0 (sucessful)
 */
int main(void)
{
	char c = 'A';
	char *s = "hello";

	_printf("%c %s %%\n", c, s);

	return (0);
}
