#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
