#include "main.h"

/**
 * _printc - prints the char
 * @list: argument
 * @format: string format
 *
 *
 * Return: integer
 */
int _printc(char *format, va_list list)
{
(void)format;
_putchar(va_arg(list, int));
return (0);
}

/**
 * _prints - prints a string
 * @list: argument
 * @format: string format
 *
 *
 * Return: string
 */
void _prints(char *format, va_list list)
{
char *str;
str = va_arg(list, char *);
(void)format;
if (string == NULL)
{
_puts("null");
}
_puts(str);
}

/**
 * _percent - print percentage
 * @format: formart
 * @list: argument
 *
 *
 * Return: percent
 */
void _percent(char *format, va_list list)
{
(void)format;
(void)list;
_putchar('%');
}
