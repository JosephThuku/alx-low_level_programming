#include "main.h"
#include <stdio.h>
/**
 * print_sign - function to print sign
 * @n:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}