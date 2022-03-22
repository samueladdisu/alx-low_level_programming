#include "main.h"

void swap_int(int *a, int *b)
{
	int n = *a;
	int m = *b;

	*a = m;
	*b = n;
}
