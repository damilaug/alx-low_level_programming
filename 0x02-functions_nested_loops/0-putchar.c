#include "main.h"
/**
 * main - Entry point
 * void: no argument
 * Return: Always 0 (Sucess/correct)
 */
int main(void)
{
	char object[] = "_putchar";

	int c;

	for (c = 0 ; c < 8 ; c++)
	{
		_putchar(object[c]);
	}
	_putchar('\n');
	return (0);
}
