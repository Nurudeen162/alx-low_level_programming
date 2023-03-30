#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * *leet - Encode a string
 * @str: check the length of the string
 * Return: Always 0
 */
char *leet(char *str)
{
	char *result = str;
	const char *letters = "aeotl";
	const char *replacements = "43071";
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] == letters[i] || str[j] == toupper(letters[i]))
			{
				result[j] = replacements[j];
			}
		}
	}
	return (result);
}
