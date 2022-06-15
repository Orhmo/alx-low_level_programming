#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: string to be capitalized.
 *
 * Return: pointer
 */
char *cap_string(char *str)
{
int i = 0;

while (str[i])
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
index++;

if (str[i - 1] == ' ' ||
str[i - 1] == '\t' ||
str[i - 1] == '\n' ||
str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}' )
str[index] -= 32;

index++;
}
