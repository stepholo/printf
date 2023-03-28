#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
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
} s_type;

int _putchar(char c);
void _puts(char *s);
int _printf(const char *format, ...);
int (*selector(const char *format))(char *format, va_list);
int _percent(char *format, va_list list);
int _printc(char *format, va_list list);
int _prints(char *format, va_list list);
int _printint(va_list args);
int printbinary(char *format, va_list);
int _printdec(char *format, va_list args);

#endif
