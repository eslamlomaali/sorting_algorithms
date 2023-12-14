#include "sort.h"

/**
*swap_elements - place of two elements into an array
*@arr: an array
*@first: an array of element
*@seconed: an array of element
*/
void swap_elements(int *arr, int first, int seconed)
{

	int store;

	store = arr[first];
	arr[first] = arr[seconed];
	arr[seconed] = store;
}
/**
 * shell_sort - rite a function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 * @size: size of array
 * @array: list of num
 */
void shell_sort(int *array, size_t size)
{
	size_t distance = 1, z, idx = 0;

	if (array == NULL || size < 2)
		return;
	while (distance < size / 3)
		distance = 3 * distance + 1;
	while (distance >= 1)
	{
		for (z = distance; z < size; z++)
			for (idx = z; idx >= distance &&
			 (array[idx] < array[idx - distance]); idx -= distance)
				swap_elements(array, idx, idx - distance);
		print_array(array, size);
		distance /= 3;
	}
}
