#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *infinite_add - Function that add two numbers
 * @n1: An integer param
 * @n2: an integer param
 * @r: the outcome to be considered
 * @size_r: - the size of the outcome
 * Return: Always 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i, j, k;
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	for (i = 0; i < len1 / 2; i++)
	{
		char tmp = n1[i];

		n1[i] = n1[len1 - i - 1];
		n1[len1 - i - 1] = tmp;
	}
	for (i = 0; i < len2 / 2; i++)
	{
		char tmp = n2[i];

		n2[i] = n2[len2 - i - 1];
		n2[len2 - i - 1] = tmp;
	}
	i = j = k = 0;
	while (i < len1 || j < len2 || carry)
	{
		int sum = carry;

		if (i < len1)
			sum += n1[i++] - '0';
		if (j < len2)
			sum += n2[j++] - '0';
		if (k < size_r)
			r[k++] = sum % 10 + '0';
		carry = sum / 10;
	}
	for (i = 0; i < k / 2; i++)
	{
		char tmp = r[i];

		r[i] = r[k - i - 1];
		r[k - i - 1] = tmp;
	}
	r[k] = '\0';
	if (k >= size_r)
		return (0);
	else
		return (r);
}
