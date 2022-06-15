#include "main.h"

/**
 * leet - encodes.
 * @str: string.
 *
 * Return: pointer.
 */
char *leet(char *str)
{
	int i = 0, s;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (s = 0; s <= 7; s++)
		{
			if (str[i] == leet[s] ||
			    str[i] - 32 == leet[s])
				str[i] = s + '0';
		}

		i++;
	}

	return (str);
}
