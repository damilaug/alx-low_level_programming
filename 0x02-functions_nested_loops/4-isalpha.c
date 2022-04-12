#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes a character
 * Return: 1 if letter, lowercase, uppercase; 0 otherwise
 */
int _isapha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
