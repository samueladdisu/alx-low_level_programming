#include "search_algos.h"
/**
 * jump_search - search sorted list using jump algo
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index of value if found else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, next = 0, i;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", next, array[next]);
	next = floor(sqrt(size));
	while (array[next] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", next, array[next]);
		next = next + floor(sqrt(size));
		if (next >= size)
			break;
	}
	start = next - floor(sqrt(size));
	printf("Value found between indexes [%ld] and [%ld]\n", start, next);
	if (next >= size)
		next = size - 1;
	for (i = start; i <= next; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
