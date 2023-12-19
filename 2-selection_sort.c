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
 * selection_sort - Write a function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @size: size of array
 * @array: list of num
 */
void selection_sort(int *array, size_t size)
{
	int *decrease;
	size_t y, z;

	if (array == NULL || size < 2)
		return;

	for (y = 0; y < size - 1; y++)
	{
		decrease = array + y;
		for (z = y + 1; z < size; z++)
			decrease = (array[z] < *decrease) ? (array + z) : decrease;

		if ((array + y) != decrease)
		{
			swapi(array + y, decrease);
			print_array(array, size);
		}
	}
}
