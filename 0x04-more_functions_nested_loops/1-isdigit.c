#include "main.h"
/**
 * _isdigit - check for numbers
 * @c: character
 *
 *Return: boolen
 */
int _isdigit(int c)
{
  if (c >= '0' && c <= '9')
    {
      return (1);
    }
  return(0);
}
