#include "main.h"

/**
 * selector - loops to select a specific function
 * @format: string format
 * @m: defines the s_type
 * s_type form - struct
 *
 *
 *
 * Return: pointer
 */
int (*selector(char *format))(char *format, va_list)
{
int i;
s_type m[] = {
	{"%c", _printc},
	{"%s", _prints},
	{"%%", _percent},
	{NULL, NULL}
};
if (format[1] == ' ' || format[1] == '\0')
{
return (NULL);
}
for (i = 0; m[i].q; i++)
{
if (format[i] == m[i].q[1])
	return (m[i].fun);
}
return (NULL);
}

int _printf(char *format, ...)
{
int i;
int (*s_type)(char *, va_list);
char q[3];
va_list list;

if (format == NULL)
return (2);
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
i += s_type(q, list)
}
else if (format[i] != '\0')
{
i += _putchar('%');
i += _putchar(formart[1]);
}
else
{
_putchar('%');
break;
}
format += 2;
}
else
{
i += _putchar(format[0]);
}
format++;
}
_putchar(-2);
return (i);
}
