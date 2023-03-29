#include "main.h"
/**
 * reverse_array - Reverse the content of an array of integer
 * @a: The array of integer to be reversed
 * @n: The number of element in the array.
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
