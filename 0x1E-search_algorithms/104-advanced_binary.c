#include "search_algos.h"
/**
 * _binary_search - search sorted array for a value
 * @array: array to be searched
 * @value: value to be searched
 * @low: start index
 * @high: end index
 * Return: index of value if found else -1
 */
int _advanced_binary(int *array,
		int value, size_t low, size_t high)
{
	size_t i = 0;
	size_t mid;

	printf("Searching in array: %d", array[low]);
	for (i = low + 1; i <= high; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
	mid = low + (high - low) / 2;
	if (array[mid] == value && (low == high || array[mid - 1] != value))
		return (mid);
	if (low >= high)
		return (-1);
	if (array[mid] < value)
		return (_advanced_binary(array, value, mid + 1, high));
	return (_advanced_binary(array, value, low, mid));
}
/**
 * advanced_binary - search sorted array for a value
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index of value if found else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (_advanced_binary(array, value, 0, size - 1));
}
