#include <stdio.h>

/**
 * print_alphabet - printing lowercase alphabets
 * followed by a new line
 * return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
