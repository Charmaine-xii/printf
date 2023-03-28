#include "main.h"

/**
* _puts - output string to standard output
*
* @s: string arguement
*
* Return: integer
*/

int _puts(char *s)
{
	int counter = 0;

	while (s[counter])
	{
		_putchar(s[counter]);
		counter++;
	}

	return (counter);
}
