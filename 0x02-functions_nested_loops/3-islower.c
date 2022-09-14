#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - function to check for lowercase character
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
int lower = 0;
if (islower(c))
{
lower = 1;
}
return (lower);
}


