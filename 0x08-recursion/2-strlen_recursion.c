#include "main.h"

/**
 * _strlen_rrecursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _sterlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
