#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap_int - a function that swaps two integers
 *
 * @a:  first int of an array
 * @b: second int of the array
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - a function that sorts an array of integers in ascending
 * order using selection sort algorithm
 *
 * @array: the array to sort from
 * @size: of the array i guess
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || !array || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *min)
				min = (array + j);
		}
		if ((array + i) != min)
		{
			swap_int(array + i, min);
			print_array(array, size);
		}

	}
}
