#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @n: bytes number
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
