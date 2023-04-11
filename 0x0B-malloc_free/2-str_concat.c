#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *result = malloc(len1 + len2 + 1);

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (!result)
	return (NULL);
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);
	return (result);
}
