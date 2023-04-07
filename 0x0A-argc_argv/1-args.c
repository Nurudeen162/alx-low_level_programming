#include "main.h"
#include <stdio.h>
/**
 * main - prints number of argurement passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
