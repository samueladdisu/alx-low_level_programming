#include "main.h"
/**
 * swap_int - swap integer
 * @a: pointer to variable
 * @b: pointer to b variable
 * Return - nothing
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	int m = *b;

	*a = m;
	*b = n;
}
