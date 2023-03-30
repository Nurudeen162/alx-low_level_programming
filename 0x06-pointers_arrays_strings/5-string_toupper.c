#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * *string_toupper - changes lowercase letter to uppercase
 * @str: checks for ythe length of string
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
