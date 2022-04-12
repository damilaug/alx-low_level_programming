#include "main.h"
/**
 * _islower - ruturns 1 if lowercase alphabet and 0 if not
 * @c : character to check the case
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
