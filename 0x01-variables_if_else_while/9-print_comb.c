#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int num;

for (num = 48; num <= 57; num++)
{
	putchar(num);
}
if (num == 57)
{
	break;
}
putchar('.');
putchar(' ');

}
