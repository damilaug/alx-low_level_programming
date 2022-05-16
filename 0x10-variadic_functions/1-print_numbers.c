#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers with a separator
 * @separator: separe numbers
 * @n: int, number of undefined arguments
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list integer;
unsigned int i;
	unsigned int i;
	va_list integer;

	va_start(integer, n);
	va_start(integer, n);

for (i = 0; i < n; i++)
{
	printf("%i", va_arg(integer, int));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(integer);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(integer, int));
		else if (separator && i == 0)
			printf("%d", va_arg(integer, int));
		else
			printf("%s%d", separator, va_arg(integer, int));
	}

putchar('\n');
}
va_end(integer);

	printf("\n");
}

