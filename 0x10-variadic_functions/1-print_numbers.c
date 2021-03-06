#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list p;

	va_start(p, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(p, int));
		if (x + 1 != n && separator)
			printf("%s", separator);
	}
	putchar(10);
	va_end(p);
}
