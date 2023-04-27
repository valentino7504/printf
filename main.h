#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct prints - structure of format specifiers and functions
 * @specifier: the character type
 * @print_function: the print function to call
 * Description - Stores specifiers and format printer functions
 */
typedef struct prints
{
	char *specifier;
	int (*print_function)();
} print_t;
int _putchar(char c);
int _strlen(char *s);
int printf_c(va_list ap);
int printf_str(va_list ap);
int printf_37(void);
int printf_int(va_list ap);
int printf_b(va_list ap);
int printf_revstr(va_list ap);
int printf_rot(va_list ap);
int _printf(const char *format, ...);
#endif
