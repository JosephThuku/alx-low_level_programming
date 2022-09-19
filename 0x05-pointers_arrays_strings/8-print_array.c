#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints elements of an array
 * @a: Arrays of integers
 * @n: Number of elements of the array
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
