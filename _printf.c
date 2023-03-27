#include "main.h"
/**
 * _printf - function that emulates printf()
 * @format: The character to be printed out
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			switch (*++format)
			{
				case 'c':
					count++, _putchar(va_arg(args, int));
					break;
				case 's':
					for (const char *s = va_arg(args, const char *); *s; s++, count++)
						_putchar(*s);
					break;
				case '%':
					count++, _putchar('%');
					break;
			}
		}
		else
			count++, _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
