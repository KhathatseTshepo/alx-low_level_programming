#include "main.h"

/**
 * _puts_recursion - write a string to stdout
 * @s: is a string array
 * Return: (0) Success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
