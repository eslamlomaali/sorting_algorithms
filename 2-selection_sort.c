#include "sort.h"
/**
 * selection_sort - Write a function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @size: size of array
 * @array: list of num
 */
void selection_sort(int *array, size_t size)
{
	size_t z, idx;
	int store, s, special = 0;

	if (array == NULL)
		return;
	for (z = 0; z < size; z++)
	{
		store = z;
		special = 0;
		for (idx = z + 1; idx < size; idx++)
		{
			if (array[store] > array[idx])
			{
				store = idx;
				special += 1;
			}
		}
		s = array[z];
		array[z] = array[store];
		array[store] = s;
		if (special != 0)
			print_array(array, size);
	}
}
