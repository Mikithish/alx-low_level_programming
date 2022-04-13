#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase,
 * followed by a new line
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
