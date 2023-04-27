#include "main.h"

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num = n, i = 0, digit;
	int skip_leading_zeros = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		i++;
	}
	while (num > 0 || !skip_leading_zeros)
	{
		digit = num % 10;
		num /= 10;

		if (digit > 0 || skip_leading_zeros)
		{
			_putchar(digit + '0');
			i++;
			skip_leading_zeros = 1;
		}
	}

	return (i);
}
