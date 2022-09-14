#include "stdio.h"
/**
* print_alphabet - function to print abc
 *
 * Return: 0
 */
void print_alphabet(void)
{
char i = 'a';
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}