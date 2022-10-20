#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return(0);
}
void print_alphabet(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		int j;
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
