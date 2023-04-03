#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Function that searches a string
 * @s: String to search
 * @accept: The argurement to pass
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
