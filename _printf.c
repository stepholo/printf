#include "main.h"

/**
 * _printf - Emulates printf() function in the standard library
 * @format: is the character string to be printed out
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;
    const char *p = format;
    while (*p != '\0') {
        if (*p == '%') {
            switch (*(++p)) {
                case 'c': {
                    char c = (char) va_arg(args, int);
                    _putchar(c);
                    count++;
                    break;
                }
                case 's': {
                    const char *s = va_arg(args, const char *);
                    while (*s != '\0') {
                        _putchar(*s++);
                        count++;
                    }
                    break;
                }
                case '%': {
                    _putchar('%');
                    count++;
                    break;
                }
            }
        } else {
            _putchar(*p);
            count++;
        }
        p++;
    }

    va_end(args);
    return count;
}

