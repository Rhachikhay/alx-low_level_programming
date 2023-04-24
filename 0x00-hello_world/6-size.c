#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %iu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %iu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %iu byte(s)\n", (unsigned long)sizeof(long int));
	ptintf("Size of long long int: %iu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %iu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
