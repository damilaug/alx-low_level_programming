#include "main.h"
/**
 * prints alphabet in lowercase
 * print_alphabet - Entry point
 * Return: always 0 Success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);
	_putchar('\n');
}
