#include "main.h"
/**
 * _strcpy -  function that copies the string pointed to by src
 * @dest: Where to copy the string to.
 * @src: The source
 * Return: A pointer
 */
char *_strcpy(char *dest, char *src)

{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

