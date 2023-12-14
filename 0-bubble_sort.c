#include "sort.h"
/**
 * bubble_sort - Write function sorts an array of integers in ascending order
 * @array: an array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{

	size_t z, idx, store = 0;

	if (size < 2)
		return;
	for (z = 0; z < size; z++)
		for (idx = 0; idx < size; idx++)
		{
			if (array[idx] > array[idx + 1] && array[idx + 1])
			{
			store = array[idx];
			array[idx] = array[idx + 1];
			array[idx + 1] = store;
			print_array(array, size);
			}
		}
}
