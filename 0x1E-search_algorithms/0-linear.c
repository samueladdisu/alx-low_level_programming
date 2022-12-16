#include "search_algos.h"
/**
 * linear_search - search element in unsorted array
 * @array: array to be searched from
 * @size: size of the array
 * @value: value to be searched
 * Return: index if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
