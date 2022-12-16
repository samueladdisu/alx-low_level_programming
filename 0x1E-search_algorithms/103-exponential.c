#include "search_algos.h"
/**
 * _binary_search - search sorted array for a value
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * @start: start index
 * @stop: end index
 * Return: index of value if found else -1
 */
int _binary_search(int *array, size_t size, int value,
		size_t start, size_t stop)
{
	size_t i = 0;
	size_t low = start;
	ssize_t mid = size / 2;
	size_t high = stop;

	if (array == NULL)
		return (-1);
	while (1)
	{
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i <= high; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
		{
			low = mid + 1;
			high = high;

		}
		else
		{
			high = mid - 1;
			low = low;
		}
		if (low > high)
			break;
	}
	return (-1);
}

/**
 * exponential_search - search algorith with
 * * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index if found else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int exp = 0, max;
	size_t start, stop;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	if (array[1] == value)
		return (1);
	while (1)
	{
		if (((size_t)1 << exp) >= size)
			break;
		max = array[(size_t)1 << exp];
		if (max >= value)
			break;
		printf("Value checked array[%ld] = [%d]\n", ((size_t)1 << exp), max);
		exp++;
	}
	if (((size_t)1 << exp) >= size)
		printf("Value found between indexes [%d] and [%ld]\n",
				1 << (exp - 1), size - 1);
	else
		printf("Value found between indexes [%d] and [%ld]\n",
				1 << (exp - 1), (size_t)1 << exp);
	start = (size_t)1 << (exp - 1);
	if (((size_t)1 << exp) >= size)
		stop = size - 1;
	else
		stop = (size_t)1 << exp;
	size = stop - start + 1;
	return (_binary_search(array, size, value, start, stop));
}
