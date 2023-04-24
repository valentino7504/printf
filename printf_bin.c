#include "main.h"
/**
 * printf_b - prints binary of an unsigned int
 * @ap: the variable arguments
 * Return: the number of characters printed
 */
int printf_b(va_list ap)
{
	int flag = 0, count = 0;
	int i, masker = 1;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int bit_value;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; i <= 31; i++)
	{
		bit_value = (masker << (31 - i)) & num;
		if (bit_value >> (31 - i))
			flag = 1;
		if (flag)
		{
			count++;
			_putchar(48 + (bit_value >> (31 - i)));
		}
	}
	return (count);
}
