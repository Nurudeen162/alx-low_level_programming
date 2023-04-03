#include "main.h"
#include <stdio.h>
/**
 * _strchr - A function that locates character in a string
 * @c: character c
 * @s: string s
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
