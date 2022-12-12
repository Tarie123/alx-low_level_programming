#include <stdio.h>
/**
 * main - main funct
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return 1
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (1);
}

