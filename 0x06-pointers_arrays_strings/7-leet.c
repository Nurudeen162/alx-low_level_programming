#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *leet - Encode a string
 * @str: check the length of the string
 * Return: Always 0
 */
char *leet(char *str)
{
	char *result = malloc(strlen(str) + 1);
	char *p = str;
	char *q = result;

	if (result == NULL)
	{
		return (NULL);
	}

	while (*p)
	{
		if (*p == 'a' || *p == 'A')
		{
			*q = '4';
		}
		else if (*p == 'e' || *p == 'E')
		{
			*q = '3';
		}
		else if (*p == 'o' || *p == 'O')
		{
			*q = '0';
		}
		else if (*p == 't' || *p == 'T')
		{
			*q = '7';
		}
		else if (*p == 'l' || *p == 'L')
		{
			*q = '1';
		}
		else
		{
			*q = *p;
		}
		p++;
		q++;
	}
	*q = '\0';
	return (result);
}
