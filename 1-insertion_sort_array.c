#include "sort.h"

/**
 * main - Insertion sort.
 *
 * Return: always 0.
 */
int main(void)
{
	int i, j;
	int n = 10;
	int arr[] = {0, 78, 90, 256, 53, 122, 24, 54, 41, 2};

	i = 1;
	while (i < n)
	{
		j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			arr[j] = arr[j] + arr[j - 1];
			arr[j - 1] =  arr[j] - arr[j - 1];
			arr[j] = arr[j] - arr[j - 1];
			print_array(arr, 10);
			j--;
		}
		i++;
	}
	return (0);
}

