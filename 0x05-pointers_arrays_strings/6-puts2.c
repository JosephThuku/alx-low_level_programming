#include "main.h"
#include <string.h>

/**
 * puts2 - Function that prints every other character of a string
 * @str: prints string
 * Return: A string
 */
void puts2(char *str)
{
int b;
int i;
b = strlen(str);
for (i = 0; i < b; i += 2)
_putchar(str[i]);
_putchar('\n');
}

