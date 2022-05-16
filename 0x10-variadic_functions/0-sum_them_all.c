#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sum all arguments
 * @n: int, number of undefined arguments
 *
 * Return: sum of args
 * On error, 0 is returned
 */

int sum_them_all(const unsigned int n, ...)
{
va_list integer;
unsigned int i, sum = 0;

va_start(integer, n);
if (n != 0)
	for (i = 0; i < n; sum += va_arg(integer, unsigned int), i++)
	;
va_end(integer);

return (sum);
}
