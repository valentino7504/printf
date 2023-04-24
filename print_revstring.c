#include "main.h"
/**
 * printf_revstr - prints a string
 * @ap: the variable list of arguments
 * Return: the length of the string
 */
int printf_revstr(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;
	int length = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[length])
		length++;
	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (length);
}
