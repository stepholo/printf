#include "main.h"
#include <stdio.h>

/**
 * _printf - print formatted text
 * @format: first
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int s = 0;
	va_list list;

	va_start(list, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				s = fmt_char(va_arg(list, int));
			else if (format[i] == 's')
				s = fmt_str(va_arg(list, char *));
			else if (format[i] == '%')
			{
				_putchar('%');
				s -= 1;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
			}
			i++;
		}
		_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (i + s);
}
