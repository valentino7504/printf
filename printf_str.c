#include "main.h"
/**
 * printf_str - prints a string
 * @ap: the variable list of arguments
 */
void printf_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
