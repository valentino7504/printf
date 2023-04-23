#include "main.h"
/**
 * printf_c - print a char for the printf function
 * @ap: the argument list
 * Return: 1
 */
int printf_c(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);
}
