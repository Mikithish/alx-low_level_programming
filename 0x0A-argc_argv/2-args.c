#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: n args
 * @argc: arr args
 * Return: 0
 */

int main(int atgc, char *atgv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
