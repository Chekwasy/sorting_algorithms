#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * selection_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int val, inval, idx = 0;

	if (array == NULL)
		return;
	if (size <= 1)
		return;
	for (i = 0; i < size; i++)
	{
		inval = array[i];
		val = inval;
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (val > array[j])
			{
				val = array[j];
				idx = j;
			}
		}
		array[idx] = inval;
		array[i] = val;
		if (inval != val)
			print_array(array, size);
	}
}
