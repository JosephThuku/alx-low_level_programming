#include "main.h"
#include <string.h>
/**
 * puts_half - Function to print half of a string
 * @str: print the string
 * Return: String
 */
void puts_half(char *str)
{
int x;
int y;
int z;
x = strlen(str);
if (x % 2 == 1)
y = x / 2 + 1;
else
y = x / 2;
for (z = y; z < x; z++)
_putchar(str[z]);
_putchar('\n');
}

