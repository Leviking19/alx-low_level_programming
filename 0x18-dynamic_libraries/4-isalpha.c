#include "main.h"

/**
 * _isalpha - Shows 1 if the input is a
 * @c: The character to be checked
 *
 * Description: function that checks for alphabetic character.
 *
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
