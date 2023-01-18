#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition function
 * @a: first integer value
 * @b: second integer value
 * Return: sum
 */
int op_add(int a, int b)
{
return (a + b);
}
int op_sub(int a, int b)
{
return (a - b);
}
int op_mul(int a, int b)
{
return (a * b);
}
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
