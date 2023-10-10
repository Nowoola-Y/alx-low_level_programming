#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name followed by a new line
 * @argc: the number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
