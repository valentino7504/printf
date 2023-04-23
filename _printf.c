#include "main.h"
/**
 * _printf - prints a formatted string
 * @format: the formatted string
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
	int i = 0, j, length;
	va_list ap;
	print_t prints[] = {{"s", printf_str}, {"%", printf_37},
	{"c", printf_c}, {NULL, NULL}};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			j = 0;
			while (prints[j].specifier)
			{
				if (*(prints[j].specifier) == format[i + 1])
				{
					length += prints[j].print_function(ap);
					break;
				}
				j++;
			}
			if (prints[j].specifier == NULL)
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				length += 2;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			length++;
			i++;
		}
	}
	va_end(ap);
	return (length);
}
