#include "main.h"

/**
 * swap_int - Swapping values of two integers
 *
 * @a: First integer to swap with
 * @b: Second integer to swap with
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
