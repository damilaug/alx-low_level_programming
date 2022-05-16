#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list integer;

	va_start(integer, format);

	if (format)
	{
		while (format[j])
			{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(integer, int));
					break;
				case 'j':
					printf("%s%d", sep, va_arg(integer, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(integer, double));
					break;
				case 's':
					str = va_arg(integer, char *);
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
	va_end(integer);
}
