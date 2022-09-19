#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: output
 * Return: A string in reverse form
 */
void rev_string(char *s)
{
char var = s[0];
int bcount = 0;
int i;
while (s[bcount] != '\0')
bcount++;

for (i = 0; i < bcount; i++)
{
bcount--;
var = s[i];
s[i] = s[bcount];
s[bcount] = var;
}
}

