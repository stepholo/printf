#include "main.h"
/**
 * _putchar - Implementation of own putchar
 * @c: variable character
 *
 * Return: 0
 */

int _putchar(char c)
{
write(1, &c, 1);
return (0);
}
