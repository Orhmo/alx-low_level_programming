#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: char array string type
 * 
 */

void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_puts(str[i]);
}
_puts('\n');
}
