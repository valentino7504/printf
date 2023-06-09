#include "main.h"
/**
 * _printf - prints a formatted string
 * @format: the formatted string
 * Return: the length of the string
 */
int _printf(const char *format, ...)
{
	int i = 0, length = 0, found = 0;
	unsigned long int j;
	va_list ap;
	print_t prints[] = {{"%s", printf_str}, {"%%", printf_37},
	{"%r", printf_revstr},
	{"%c", printf_c}, {"%d", printf_int}, {"%i", printf_int}, {"%b", printf_b},
	{"%R", printf_rot}, {"%p", printf_ptr}};

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		j = 0;
		found = 0;
		while (j < (sizeof(prints) / sizeof(print_t)))
		{
			if (prints[j].specifier[0] == format[i] &&
			prints[j].specifier[1] == format[i + 1])
			{
				length += prints[j].print_function(ap);
				found = 1;
				i += 2;
				break;
			}
			j++;
		}
		if (!found)
		{
			_putchar(format[i]);
			length++;
			i++;
		}
	}
	va_end(ap);
	return (length);
}
