#include "main.h"

/**
 * printbinary - prints a binary number
 * @format: format
 * @list: argument
 *
 *
 * Return: count
 */
int printbinary(char *format, va_list list)
{
int i, count, numb;
int binary[32] = {0};
numb = va_arg(list, unsigned int);
i = count = 0;
(void)format;
if (numb == 0)
{
_putchar('0');
count++;
return (count);
}
while (numb > 0)
{
binary[i] = numb % 2;
numb /= 2;
i++;
}
while (i > 0)
{
i--;
_putchar('0' + binary[i]);
count++;
}
return (count);
}
