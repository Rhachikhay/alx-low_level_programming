#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @u: character to be checked
 * Return: 1 if character is a letter, 0 if not
 */
int _isalpha(int u)
{
	if ((u >= 'a' && u <= 'z') || (u >= 'A' && u <= 'Z'))
		return (1);
	else
		return (0);
}
