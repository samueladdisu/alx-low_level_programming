#include "search_algos.h"
/**
 * binary_search - search sorted array for a value
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index of value if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	ssize_t mid = size / 2;
	size_t low = 0;
	size_t high = size - 1;

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
