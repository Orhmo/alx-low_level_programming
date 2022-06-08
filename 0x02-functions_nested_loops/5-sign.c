#include "main.h"
/**
 *print_sign - main
 *
 *@n: character
 *
 *Return: 1(positive), 0(zero), -1(negetive)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
