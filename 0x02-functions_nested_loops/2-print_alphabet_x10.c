#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times,
 * followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	char letter = 'a';

	for (n = 0; n < 10; n++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
