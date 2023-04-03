#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: a pointer to the set of characters to be matched
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;
		int accept_len = strlen(accept);

		for (i = 0; s[i]; i++)
		{
			for (j = 0; j < accept_len; j++)
			{
				if (s[i] == accept[j])
				{
					count++;
					break;
				}
			}
			if (j == accept_len)
			{
				break;
			}
		}
		return (count);
}
