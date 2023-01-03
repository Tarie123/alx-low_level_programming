#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: char
 * @b: char
 * @n: int
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n ; i++)
{
s[i] = b;
n--;
}
return (s);
}
