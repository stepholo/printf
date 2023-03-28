#include "main.h"

/**
 * print_pointer - prints a pointer
 * @list: argument
 * @format: format
 *
 *
 * Return: 0
 */
int print_pointer(char *format, va_list list)
{
void *ptr;
char *str = "(nil)";
int y, i;
long int b;
ptr = va_arg(list, void*);
(void)format;
if (ptr == NULL)
{
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
return (i);
}
b = (unsigned long int)ptr;
_putchar('0');
_putchar('x');
y = print_hex_aux(b);
return (y + 2);
}
