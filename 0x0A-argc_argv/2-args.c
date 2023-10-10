#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name followed by a new line
 * @argc: the number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
