#include "main.h"

/**
 * printf_rot - prints a string in ROT13 encryption format
 * @ap: the argument list
 * Return: the number of characters printed
 */
int printf_rot(va_list ap)
{
	int i = 0, j = 0, count = 0, flag = 0;
	char *str = va_arg(ap, char*);
	char first_half[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char second_half[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; first_half[j] && flag == 0; j++)
		{
			if (str[i] == first_half[j])
			{
				_putchar(second_half[j]);
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			_putchar(str[i]);
			count++;
		}
	}

	return (count);
}
