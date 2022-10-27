#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	while (s[i])
	{
		for (j = 0; alp[j] && alp[j] != s[i]; j++);
		if (alp[j])
			s[i] = rot[j];
		i++;
	}
	return (s);
}
