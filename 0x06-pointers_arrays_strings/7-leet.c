#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
    char s1[] = "aAeEoOtTlL";
    char s2[] = "4143071";
    int i = 0;
    int j = 0;
    while (s[i])
    {
        while (s1[j] && s1[j] != s[i])
            j++;
        if (s1[j])
            s[i] = s2[j / 2];
        j = 0;
        i++;
    }
    return (s);
}
