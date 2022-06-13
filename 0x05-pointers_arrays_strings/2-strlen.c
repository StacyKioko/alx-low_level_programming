#include "main.h"

/**
 * _strlen - Returning length of a string
 *
 * @s: String length to display
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
