#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * @c: The character to be checked
 *
 * Description: function that checks for lowercase character
 *
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
