#ifndef MAIN_H
#define MAIN_H

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

#endif
