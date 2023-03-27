#include "main.h"

/**
 * _putchar - prints character
 * @character: The character to print
 * Return: 1 for success, -1 for error.
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
