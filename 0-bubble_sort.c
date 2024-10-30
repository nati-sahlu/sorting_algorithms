#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of ints
 * in ascending order using the bubblesort algorithm
 *
 * @array: the array to sort
 * @size: the positive size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, o;
	int check = 0;

	if (!array || size < 2 || array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (o = 0; o < size - 1; o++)
		{
			if (array[o] > array[o + 1])
			{
				temp = array[o];
				array[o] = array[o + 1];
				array[o + 1] = temp;
				print_array(array, size);
				check += 1;
			}

		}
		if (check == 0)
		{
			break;
		}
	}
}
