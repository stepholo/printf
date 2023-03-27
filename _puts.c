#include "main.h"

/**
 * _puts - prints a string
 * @str: str to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
int i;/* for element count*/
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\0');
}
