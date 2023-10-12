#include "variadic_function.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anthing
 * @format: list of types of argument passed to the function
 */
void print_all(const char *seperator, const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_strat(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'l':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}

