#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	int lo, ho;

	lo = 0;
	ho = size - 1;
	array_sort(array, lo, ho, size);
}

/**
 * array_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @lo: lower bound in @array
 * @ho: higher bound in array
 * @size: size
 */
void array_sort(int *array, int lo, int ho, size_t size)
{
	int pivotidx, start, end;

	start = lo;
	end = ho;

	if (lo < ho)
	{
		pivotidx = partition(array, start, end, size);
		if (pivotidx != 0)
			array_sort(array, lo, pivotidx - 1, size);
		array_sort(array, pivotidx + 1, ho, size);
	}
}

/**
 * partition - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 * @lo: lo
 * @ho: ho
 * Return: int
 */
int partition(int *array, int lo, int ho, size_t size)
{
	int pivot, i, j;

	pivot = array[ho];
	i = lo;

	for (j = lo; j < ho; j++)
	{
		if (array[j] <= pivot)
		{
			swap_array(array, i, j);
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	swap_array(array, i, j);
	if (i != j)
		print_array(array, size);
	return (i);
}

/**
 * swap_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: firat elem to swap @array
 * @end: second elem to swap
 */
void swap_array(int *array, int start, int end)
{
	int tmp;

	tmp = array[end];
	array[end] = array[start];
	array[start] = tmp;
}
