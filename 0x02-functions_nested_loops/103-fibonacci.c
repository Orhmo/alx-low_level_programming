#include <stdio.h>
/**
 * main - prints sum of even-valued terms
 *
 * Return : 0
 */
int main(void)
{
	int count = 0;
	long int i = 1;
	long int j = i;
	long int k = i + j;

	while (k < 4000000)
	{
		if (k % 2 == 0)
		{
			count += k;
		}
		i = j;
		j = k;
		k = i + j;
	}
	printf("%d\n", count);
	return (0);
}
