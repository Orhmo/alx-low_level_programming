#include "main.h"
/**
 * main - Prints "_putchar" followed by a new line.
 *
 *Return : void
 */
int main(void)// this specifies there are no arguments taken by main
{
char text[9] = "_putchar";
int i = 0;
for (i = 0; i < 8; i++)
{
_putchar(text[i]);
}
_putchar('\n');
return (0);
}
