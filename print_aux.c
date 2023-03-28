#include "main.h"

/**
 * print_hex_aux - prints hexadecimal
 * @number: argument
 *
 * Return: count
 */
int print_hex_aux(unsigned long int number)
{
long int i, count, *a;
count = 0;
while (number / 16 != 0)
{
number = 16;
count++;
}
a = malloc(sizeof(long int) * count);
for (i = count -1; i >= 0; i--)
{
if (a[i] > 9)
{
a[i] = a[i] + 39;
}
_putchar(a[i] + '0');
}
free(a);
return (count);
}
