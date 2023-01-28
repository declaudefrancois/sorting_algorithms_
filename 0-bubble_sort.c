#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm.
 *
 * @array: The array of integers to sort.
 * @size: The number of element in the array.
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	char swapped;
	size_t i, n;

	if (size < 2)
		return;

	n = size;
	do {
		swapped = 0;
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				break;
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
		n -= 1;
	} while (swapped);
}
