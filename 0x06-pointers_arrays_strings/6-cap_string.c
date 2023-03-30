#include "main.h"
#include <ctype.h>
/**
 * *cap_string - Capitalize all words of a string
 * @str: check the lenght of strings
 * Return: Always 0
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (capitalize_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		capitalize_next = 0;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize_next = 1;
		}
		i++;
	}
	return (str);
}
