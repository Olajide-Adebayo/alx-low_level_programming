#include "main.h"
/**
 * _isupper - a function that checks for upper case characters
 * @c: character to check
 * Return: (1) if uppercase, (0) if otherwise.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
