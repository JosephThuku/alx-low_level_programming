#include "main.h"

/**
 * _strcat - This is a function that concatenates two strings
 * @dest: Accepts the  src string
 * @src: Appends src string to dest
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)

{
int a;
int b;

for (a = 0; dest[a] != '\0'; a++)
{
}
for (b= 0; (dest[a + b] = *src++) != '\0'; b++)
{
}
return (dest);
}
