#include "main.h"
#include "stdio.h"
/**
 * printf_int - prints integer.
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num = n, count = 0;
	int exp = 1;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	while (num / exp > 9)
		exp *= 10;
	while (num > 9)
	{
		_putchar((num / exp) + '0');
		num = num % exp;
		exp /= 10;
		count++;
	}
	_putchar((num % 10) + '0');
	count++;
	return (count);
}
