#include "main.h"
/**
 * _putchar - user defined putchar that prints to the stdout
 * @c: variable character to be printed
 *
 * Return: 0
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
