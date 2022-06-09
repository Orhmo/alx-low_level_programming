#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int counter = 2;

	float x = 1;
	float y = x + 1;
	float z = x + y;

	printf("%.0f, ", x);
	printf("%.0f, ", y);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", z);
		x = y;
		y = z;
		z = x + y;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
