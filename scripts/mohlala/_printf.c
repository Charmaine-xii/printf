#include <stdio.h>
#include <stdarg.h>
#include <string.h>
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

	int i = 0, x = 0;
	char buff[100];
	char *str_arg;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)

		while (format[i])
		{	
			if (format[i] == '%')
			{	
				i++;

			switch (format[i])
			{
				case 'c':
				{
					buff[x] = va_arg(args, int);
					x++;
						break;
				}
				case's':
				{
					str_arg = va_arg(args, char*);
					strcpy(&buff[x], str_arg);
					x += strlen(str_arg);
						break;
				}
				case '%':
				putchar('%');
					break;
				default:
					putchar(format[i]);
					break;
			}
		} else	{
			
				buff[x] = (format[i]);
					i++;
			}
		}

			fwrite(buff, x, 1, stdout);
			va_end(args);
			return (x);
	
	
	printf("%c %s %%\n");

	return (0);
}
