#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

}
