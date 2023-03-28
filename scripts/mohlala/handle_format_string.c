#include "main.h"

/**
* handle_format_string - handles format string and prints equivalent
* format specifier value
*
* @format: the format string
* @args: the va_list object containing the variadic arguments
*
* Return: number of charater printed
*/

int handle_format_string(const char *format, va_list args)
{
	int i = 0, count = 0;
	char *str;

	while (format && format[i])
	{
		if (format[i] == '%')
		{

			switch (format[i + 1]) /*return variadic arguments*/
			{
				case 'c':
					count += (char)_putchar(va_arg(args, int));
					i += 2;
					break;
				case 's':
					i += 2;
					str = va_arg(args, char *);
					count += str == NULL ? _puts("(null)") : _puts(str);
					break;
				case '%':
					count += _putchar('%');
					i += 2;
					break;
				case '\0':
					return (-1);
				default:
					count += _putchar(format[i]);
					i += 1;
					break;
			}
			continue;
		}
		count += _putchar(format[i]);
		i++;
	}

	return (count);
}
