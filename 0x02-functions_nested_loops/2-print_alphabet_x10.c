#include "main.h"
/**
 * main = print alphabet 10 times
 *
 *Return
 */
void print_alphabet_x10(void)
{
char i;
char j;

for (j = 0; j <= 9; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
