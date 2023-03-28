#include "main.h"

/**
 * selector - loops to select a specific function
 * @format: string format
 * @ptr: defines the s_type
 * s_type form - struct
 *
 * Return: pointer
 */

int (*selector(const char *format))(char *format, va_list)
{
	int i;

	s_type ptr[] = {
		{"%c", _printc},
		{"%s", _prints},
		{"%%", _percent},
		{"%d", _printdec},
		{"%i", printint},
		{"%b", printbinary},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
	{
		return (NULL);
	}

	for (i = 0; ptr[i].q; i++)
	{
		if (format[i] == ptr[i].q[1])
			return (ptr[i].fun);
	}
	return (NULL);
}

/**
 * _printf - implementation of own printf
 * @format: format string
 *
 * Return: character count
 */
int _printf(const char *format, ...)
{
	int i;
	int (*s_type)(char *, va_list);
	char q[3];
	va_list list;
if (format == NULL)
return (-1);
q[2] = '\0';
va_start(list, format);
while (format[0])
{
if (format[0] == '%')
{
s_type = selector(format);
if (s_type)
{
q[0] = '%';
q[1] = format[1];
i += s_type(q, list);
}
else if (format[1] != '\0')
{
i += _putchar('%');
i += _putchar(format[1]);
}
else
{
i += _putchar('%');
break;
}
format += 2;
}
else
{
i += _putchar(format[0]);
format++;
}
}
return (i);
}
