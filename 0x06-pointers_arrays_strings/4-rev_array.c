#include "main.h"
/**
 * reverse_array - reverse a int array
 * @a: array of integers
 * @n: array length
 * Return: void
*/
void reverse_array(int *a, int n)
{
int  i, s;

for (i = n - 1; i >= n / 2 ; i--)
{
s = a[n -1 - i];
a[n - 1 - i] = a[i];
a[i] = s;
}
}
