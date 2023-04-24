#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Always (0)
 */
int main(void)
{
	char rh;

	while (rh = 'a'; rh <= 'z'; rh++)
	       putchar(rh);

        while (rh = 'A'; rh <= 'Z'; rh++)
	       putchar(rh);

        putchar('\n');
	
	return (0);
}	
