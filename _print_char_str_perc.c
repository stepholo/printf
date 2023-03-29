#include "main.h"

/**
 * printf_str - prints a string
 * @args: numberof arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_str(va_list args, int printed)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		printed++;
		string++;
	}
	return (printed);
}

/**
 * printf_char - prints a character
 * @args: the arguements to use
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_char(va_list args, int printed)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (printed + 1);
}

/**
 * _percent - print percentage
 * @format: formart
 * @list: argument
 *
 * Return: percent
 */
int _percent(char *format, va_list list)
{
	(void)format;
	(void)list;
	_putchar('%');
	return (0);
}

