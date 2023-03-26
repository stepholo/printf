#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

#ifndef STRUCT_H
#define STRUCT_H

/**
 * struct fmt - struct to print format data
 * @c: character identifier
 * @fmtr: fomater function
 */

typedef struct fmt
{
	char c;
	void (*fmtr)(char *);
} fmt_c;

#endif

int _putchar(char c);
int _printf(const char *format, ...);
int fmt_str(char *c);
int fmt_char(int c);

#endif
