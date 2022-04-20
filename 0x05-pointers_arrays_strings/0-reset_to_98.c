#include "main.h"
/**
 * modif_my_param - set the integer to 98
 * @n: a pointer the integer we want to set to 98
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - pointer to integer a
 *
 * Return: Always 0.
 */

{
	int a;
	int *p;

	a = 402;
	p = &a;
	reset_to_98(p);
	return (0);
}
