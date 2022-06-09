#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 *Return: 0
 */
int main(void)
{
int count = 2;
long int i = 1;
long int j = 2;
long int k = i + j;
printf("%ld, %ld, ", i, j);
while (count < 50)
{
printf("%ld", k);
count++;
i = j;
j = k;
k = i + j;
if (count < 50)
{
printf(", ");
}
}
printf("\n");
return (0);
}
