#include "main.h"
/**
 * _memset -   fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: value to set
 * @n: bytes of the memory
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	/*Declaration for the FOR loop statement*/
	for (t = 0; t < n; t++)
	{
		*(s + y) = b; /*add 1 position s*/
	} /*END FOR*/
	return (s);
}
