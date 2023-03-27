#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * _printfstruct - stucture definition
 * @q:location and method to be translated
 * @fun: print specific function
 *
 *
 * Return: struct
 */
typedef struct _printstruct
{
char *q;
int (*fun)(char *format, va_list);
}s_type;

int _putchar(char c);
void _puts(char *s);
int _printf(const char *format, ...);
int (*selector(char *format))(char *format, va_list);
void _percent(char *format, va_list list);
int _printc(char *format,va_list list);
void _prints(char *format,va_list list);

#endif
