#include "search_algos.h"
/**
 * interpolation_search - search using interpolation
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index if found else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high  = size - 1;
	pos = low + (((double)(high - low) / (array[high]
					- array[low])) * (value - array[low]));
	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	while (array[pos] < value)
	{
		low = pos + 1;
		pos = low + (((double)(high - low) / (array[high]
					- array[low])) * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
			printf("Value checked array[%ld] is out of range\n", pos);
		if (array[pos] == value)
			return (pos);
		if (pos == high)
			break;
	}
	return (-1);

}
