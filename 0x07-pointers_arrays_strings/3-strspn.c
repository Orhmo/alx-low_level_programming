
#include "main.h"

/**
 * _strspn - search for set of bytes
 * @s: string
 * @accept: bytes
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int j = 0;
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
j++;
break;
}

else if (accept[i + 1] == '\0')
return (j);
}

s++;
}
return (j);
}
