#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: count string
 * Return: length of the input string
 */
int _strlen(char *s)
{
int i = 0;
for (i = 0; *s != '\0'; s++)
{
i++;
}
return (i);
}
