#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of string to be concatenated
 * Return: teh two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	size_t len = s1_len + (n < s2_len ? n : s2_len);
	char *result = malloc(len + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (result == NULL)
		return (NULL);
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n < s2_len ? n : s2_len);
	result[len] = '\0';
	return (result);
}
