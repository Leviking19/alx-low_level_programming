#include "main.h"

/**
 * swap_int - swap between a and b
 * @l: L pointer to an int that will be updated
 * @m: M pointer to an int that will be updated
 * Return: void
 */
void swap_int(int *l, int *m)
{
	int z; /*Declaring variables*/

	z = *l;  /*Z value l*/
	*l = *m;  /*l value of m*/
	*m = z; /*m value of Z*/
}
