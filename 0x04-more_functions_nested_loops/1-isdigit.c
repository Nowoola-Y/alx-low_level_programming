#include "main.h"

/**
 * _isdigit - function checks for a digit (0 through 9)
 * @c: inter to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if(c >= '0' && <= '9')
		return (1);
	else
		return (0);
}
