#include "main.h"
/**
 * swap_int - sawps the values of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
