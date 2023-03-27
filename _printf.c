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
