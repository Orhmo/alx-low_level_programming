#include "main.h"
/**
 * _memset - main
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory area 's'
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
