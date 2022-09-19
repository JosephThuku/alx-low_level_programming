#include "main.h"

/**
 * _puts - This is a function that prints a string followed by a newline
 * @str: _puts function parameter
 * Return: string
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
