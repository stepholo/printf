#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

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
int printbinary(char *format, va_list);
int printint(char *format, va_list pa);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int print_pointer(char *format, va_list list);
int print_hex_aux(unsigned long int num);
int _printhex(char *format, va_list pa);
int _printHEX(char *format, va_list pa);
int _printocta(char *format, va_list pa);
int print_rot13string(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_width(const char *format, int *i, va_list list);
int is_digit(char c);

#endif
