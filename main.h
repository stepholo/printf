#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 *
 * Return: int
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} structype;

int _putchar(char ch);
int (*driver(char *format))(char *format, va_list);
int printint(char *format, va_list pa);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int printc(char *format, va_list);
int printpercent(char *format, va_list pa);
=======
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
int _printc(char *format, va_list list);
void _prints(char *format, va_list list);
>>>>>>> b424bfb9b6e72d9072c3aac5fef6e46d7634fe60

#endif
