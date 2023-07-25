#include "sort.h"

/**
 * partition - Partitions the array using the Lomuto partition scheme.
 * @array: Pointer to the array to be partitioned.
 * @low: Starting index of the partition to be sorted.
 * @high: Ending index of the partition to be sorted.
 * Return: Index of the pivot.
 */

int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, high + 1);
			}
		}
	}

	if ((i + 1) != high)
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, high + 1);
	}
	return (i + 1);
}

/**
 * quick_sort_recursive - Recursive recursive function for quick_sort.
 * @array: Pointer to the array to be sorted.
 * @low: Starting index of the partition to be sorted.
 * @high: Ending index of the partition to be sorted.
 */

void quick_sort_recursive(int *array, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high);
		quick_sort_recursive(array, low, pi - 1);
		quick_sort_recursive(array, pi + 1, high);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order,
 * using Quick sort algorithm with Lomuto partition scheme.
 * @array: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	quick_sort_recursive(array, 0, size - 1);
}

