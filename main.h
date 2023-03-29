#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_str(va_list args, int printed);
int printf_char(va_list args, int printed);
int _percent(char *format, va_list list);
int selector(const char *format, va_list args, int printed);
int printf_binary(unsigned int num, int printed);
int printf_integer(va_list args, int printed);
int Xx(unsigned int num, int printed, int uppercase);
int printf_octal(unsigned int num, int printed);
int printf_pointer(va_list args, int printed);
int printf_reverse(va_list args, int printed);
int printf_unsign(unsigned int num, int printed);

#endif
