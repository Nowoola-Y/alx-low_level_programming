#include "main.h"
/**
 * string_toupper - change all lowecase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{       
        int i;
	
	i = o;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
