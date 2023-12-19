#include "sort.h"

#include "sort.h"

/**
 * swapi - Swap two integer.
 * @int1: The first integr
 * @int2: The second integer
 *
 */
void swapi(int *int1, int *int2)
{
	int temp;

	temp = *int1;
	*int1 = *int2;
	*int2 = temp;
}

/**
 * Lomuto_partition_scheme - Order a subset of array of integers according to
 * the lomuto partition scheme
 * @size: The size of array.
 * @array: An array of integers.
 * @end: The end of idx
 * @start: The start of idx
 *
 * Return: partition
 */
int Lomuto_partition_scheme(int *array, size_t size, int start, int end)
{
	int *axis, high, under;

	axis = array + end;
	for (high = under = start; under < end; under++)
	{
		if (array[under] < *axis)
		{
			if (high < under)
			{
				swapi(array + under, array + high);
				print_array(array, size);
			}
			high++;
		}
	}

	if (array[high] > *axis)
	{
		swapi(array + high, axis);
		print_array(array, size);
	}

	return (high);
}

/**
 * recursion_sort -quicksort algorithm by recursion.
 * @array: An array of integers.
 * @size: The size of array.
 * @start: The start of idx in arr
 * @end: The end od idx of in arr.
 *
 */
void recursion_sort(int *array, size_t size, int start, int end)
{
	int p;

	if (end - start > 0)
	{
		p = Lomuto_partition_scheme(array, size, start, end);
		recursion_sort(array, size, start, part - 1);
		recursion_sort(array, size, part + 1, end);
	}
}

/**
 * quick_sort -Write a function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: An array of integers.
 * @size: The size of the array.
 *
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	recursion_sort(array, size, 0, size - 1);
}
