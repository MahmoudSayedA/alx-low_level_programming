#include "main.h"

/**
 * _print_rev_recursion - Write a function that prints a string in reverse
 * @s:string
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	return (0);
}

