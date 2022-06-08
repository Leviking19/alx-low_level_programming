#include "main.h"

/**
 * print_sign - Determines if the input number greater, equal or less than zero
 * @n: The number to be checked
 *
 * Description: function that prints the sign of a number.
 *
 * Return: 1 for positive num, -1 for negative num or zero for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
