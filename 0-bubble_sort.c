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
 * bubble_sort - Write a function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: An array of integers
 * @size: The size of array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, tall = size;
	bool boolean = false;

	if (array == NULL || size < 2)
		return;

	while (boolean == false)
	{
		boolean = true;
		for (x = 0; x < tall - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swapi(array + x, array + x + 1);
				print_array(array, size);
				boolean = false;
			}
		}
		tall--;
	}
}
