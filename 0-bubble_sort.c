#include "sort.h"
/**
* bubble_sort - Sorts an array of integers in ascending order using
*               the Bubble Sort algorithm.
* @array: The array to be sorted.
* @size: The size of the array.
*
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
size_t i;
int temp, count = 0, swap;
do {
swap = 0;
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
swap = 1;
print_array(array, size);
count++;
}
else
{
count++;
}
}
} while (swap);
}
