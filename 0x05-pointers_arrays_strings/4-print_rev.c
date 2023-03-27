#include "main.h"

/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int r = _strlen(s);

	for (i = r - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
