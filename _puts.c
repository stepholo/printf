#include "main.h"

/**
 * _puts - function to print string
 * @str: string variable
 *
 * Return: void
 */
void _puts(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
