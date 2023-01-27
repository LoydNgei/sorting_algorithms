#include "sort.h"

/*prototypes. funcs() defined later in this file*/
void sort_alg(int *arr, int first, int last, size_t size);
int partition(int *arr, int first, int last, size_t size);

/**
  * quick_sort - quicksort algorithm
  * @array: array to be sorted
  * @size: size of array
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sort_alg(array, 0, size - 1, size);
}

/**
  * sort_alg - recursive sorting algorithm
  * @arr: array
  * @first: The first index
  * @last: The last index
  * @size: full size of array
  */
void sort_alg(int *arr, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(arr, first, last, size);
		sort_alg(arr, first, pivot - 1, size);
		sort_alg(arr, pivot + 1, last, size);
	}
}
/**
 * partition - partitioning the array
 * @arr: array
 * @first: The first index
 * @last: The last index;
 * @size: full array size
 * Return: pivot index
 */
int partition(int *arr, int first, int last, size_t size)
{
	int i, j, pivot, tmp;

	pivot = arr[last];
	i = first;

	for (j = first; j < last; j++)
	{
		if (arr[j] < pivot)
		{
			if (i != j)
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] != arr[last])
	{
		tmp = arr[i];
		arr[i] = arr[last];
		arr[last] = tmp;
		print_array(arr, size);
	}
	return (i);
}
