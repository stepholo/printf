#include "main.h"
/**
 * _putchar - user defined putchar that prints to the stdout
 * @c: variable character to be printed
 *
 * Return: 1 success, -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
