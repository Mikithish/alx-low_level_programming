#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times,
 * followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
