#include "main.h"
#include <ctype.h>
/**
 * *leet - Encode a string
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	char s1[] = "aeotl";
	char s2[] = "43071";
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
