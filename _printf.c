##include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void printf(char*, ...);

/**
* _printf - print function
* @format: format
*
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
				{
					char c = va_arg(args, int);

					putchar(c);
					count++;
					break;
				}

				case 's':
				{
					char *s = va_arg(args, char*);

					fputs(s, stdout);
					count += strlen(s);
					break;
				}

				case '%':
				{
					putchar('%');
					count++;
					break;
				}

				default:

				{
					putchar('%');
					putchar(*format);
					count += 2;
					break;
				}
			}
		}

		else

		{
			putchar(*format);
			count++;
		}

		format++;
	}

	va_end(args);

	return (count);
}

/**
* main - entry point
*
* Return: 0 (successful)
*/
int main(void)
{
	char c = 'A';
	char *s = "hello";

	int count = _printf("%c %s %%\n", c, s);

	printf("count:%d\n", count);

	return (0);

}
