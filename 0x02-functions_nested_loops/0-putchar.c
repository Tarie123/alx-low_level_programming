#include "main.h"
/**
 * main- print followed by a new line.
 * Return: 0(success)
 */
int main(void)
{
char main[] = "Main";
int i = 0;
while (main[i] != '\0')
{
_putchar (main[i]);
i++;
}
_putchar('\n');
return (0);
}
