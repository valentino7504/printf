#include "main.h"
#include "stdio.h"
/**
 * printf_int - prints integer.
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	long int n = va_arg(args, int);
	int exp = 1, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	while (n / exp > 9)
		exp *= 10;
	if (n % exp == 0)
	{
		_putchar((n / exp) + '0');
		count++;
		while (exp > 1)
		{
			_putchar('0');
			exp /= 10;
			count++;
		}
		return (count);
	}
	while (n > 9)
	{
		_putchar((n / exp) + '0');
		n = n % exp;
		exp /= 10;
		count++;
	}
	_putchar((n % 10) + '0');
	count++;
	return (count);
}
