#include "main.h"

/**
 * _isupper -prog checks for uppercase character
 * @c: Variable text
 *
 * Return: 0 or 1
 */

int _supper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
