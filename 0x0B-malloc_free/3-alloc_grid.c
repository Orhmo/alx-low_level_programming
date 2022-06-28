#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of int
 * @width: input width
 * @height: input height
 * Return: returns NULL on failure
 */

int **alloc_grid(int width, int height)
{
int **s;
int i;

if (width == 0 || height == 0)
{
return (NULL);
}
s = (int **) malloc(height * sizeof(int *));

if (arr == 0)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
s[i] = malloc(width * sizeof(int));
}
if (s != NULL)
{
return (s);
}
return (NULL);
}
