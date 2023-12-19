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
 * shell_sort - rite a function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 * @size: size of array
 * @array: list of num
 */
void shell_sort(int *array, size_t size)
{
	size_t distance, x, y;

	if (array == NULL || size < 2)
		return;

	for (distance = 1; distance < (size / 3);)
		distance = distance * 3 + 1;

	for (; distance >= 1; distance /= 3)
	{
		for (x = distance; x < size; x++)
		{
			y = x;
			while (y >= distance && array[y - distance] > array[y])
			{
				swapi(array + y, array + (y - distance));
				y -= distance;
			}
		}
		print_array(array, size);
	}
}
