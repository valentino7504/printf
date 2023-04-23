#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct prints - structure of format specifiers and functions
 *
 * Description - Stores specifiers and format printer functions
 */
typedef struct prints
{
	char *specifier;
	int (*print_function)(va_list ap);
} print_t;
int _putchar(char c);
int _strlen(char *s);
int printf_c(va_list ap);
int printf_str(va_list ap);
int printf_37(void);
int _printf(const char *format, ...);
#endif
