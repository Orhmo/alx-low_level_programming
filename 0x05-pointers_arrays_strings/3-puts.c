#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: char array string type
 * 
 */

void _puts(char *str)
{
while (*str)
_puts(*str++);

_puts('\n');
}
