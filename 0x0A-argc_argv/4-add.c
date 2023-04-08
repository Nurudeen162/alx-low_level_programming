#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - programs that adds positive numbers
 * @argc: argumente counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
