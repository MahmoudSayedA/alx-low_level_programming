#include<main.h>
/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @c
 *
 * @n: bytes of the memory area pointed to by @s
 *
 * @s: with the constant byte @c
 *
 * @c: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

