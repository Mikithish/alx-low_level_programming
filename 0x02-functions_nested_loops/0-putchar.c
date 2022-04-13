#include <stdio.h>
#include "main.h"

/**
 * main - prints the string _putchar,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[10] = "_putchar";

	int i;

	for (i = 0, i <= 8; i++)
	{
		putchar(text[i]);
	}
	putchar("\n");

	return 0;
}
