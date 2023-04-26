#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @r: the number to be printed
 * Return: 1 if the number is greater than zero, 0 if the number is zero, -1 if the number is less than zero
 */
int print_sign(int r)
{
	if (r > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (r == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-');
	}
}
