#include "main.h"
#include <string.h>
/**
 * _strncat - This is a function that concatenates two strings
 * @dest: This is the first parameter
 * @src: This is the second parameter
 * @n: This is the third parameter
 * Return: A string
 */
char *_strncat(char *dest, char *src, int n)
{

strncat(dest, src, n);
return (dest);
}

