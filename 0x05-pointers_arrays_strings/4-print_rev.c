#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
int print_rev(char *s)
{
	int s = 0;
	
	while (*s != '\0')
		*s++;
	if (*s = *s - 1, *s >= 0, *s--)
		_putchar(*s);

	_putchar('\n');
}
