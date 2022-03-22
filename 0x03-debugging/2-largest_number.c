#include "main.h"

/**
<<<<<<< HEAD
 * largest_number - return the largest of 3 numbers
=======
 * largest_number - returns the largest of 3 numbers
>>>>>>> 72ea81fda538b37ec35d1da4a52f39bfdb879466
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
<<<<<<< HEAD
	
	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
=======

	if (a >= b && a > c)
	{
		largest = a;
	}
	else if (b >= a && b > c)
>>>>>>> 72ea81fda538b37ec35d1da4a52f39bfdb879466
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
