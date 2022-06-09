#include "main.h"
/**
 *_isupper - checks for uppercase characters
 *@c: character
 *
 * Return: 1 (success) or 0 (failure)
 */
int _isupper(int c)
{
  if (c >= 65 && c <= 90)
    return (1);
  else
    return (0);
}
