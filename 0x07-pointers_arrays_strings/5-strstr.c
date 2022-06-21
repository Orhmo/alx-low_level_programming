
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
int x, y;
for (x = 0; haystack[x] > '\0'; x++)
{
for (y = x; haystack[y] > '\0' && needle[y - x] > '\0'; y++)
{
if (haystack[y] != needle[y - x])
{
break;
}
}
if (needle[y - x] == '\0')
{
return (haystack + x);
}
}
return (0);
}
