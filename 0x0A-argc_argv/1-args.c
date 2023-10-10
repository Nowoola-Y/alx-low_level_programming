#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed
 * @argc: the number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
