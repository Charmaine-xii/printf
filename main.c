#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1;
	int len2;

	len1 = _printf("%i\n", 2003);
	len2 = printf("%i\n", 2003);
	printf("%d, %d\n", len1, len2);

	return (0);
}
