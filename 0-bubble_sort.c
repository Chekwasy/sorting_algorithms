#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;

	if (array == NULL)
		return;
	if (size <= 0)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
		{
			if (array[j] < array[j - 1])
			{
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
