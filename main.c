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

	len1 = printf("Characters %c strings %s\n", '&', "combo");
	len2 = _printf("Characters %c strings %s\n", '&', "combo");
	printf("%d, %d\n", len1, len2);

	return (0);
}
