#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times,
 * followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	int nloop = 1;
	char letter = 'a';

	while (nloop <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		nloop++;
	}
}
