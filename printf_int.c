#include "main.h"
/**
 * printf_int - prints an integer to the console
 * @ap: the variable argument list containing the integer to be printed
 * Return: the number of characters printed
 */
int printf_int(va_list ap)
{
	int n = va_arg(ap, int), count = 0, digits = 0, exp = 1;
	int copy = (n < 0) ? (-1 * n) : n;
	int i, j;

	while (copy > 9)
	{
		copy /= 10;
		digits += 1;
	}
	copy = (n < 0) ? (-1 * n) : n;
	if (n < 0)
	{
		_putchar('-');
		count += 1;
	}
	for (i = digits; i >= 0; i--)
	{
		exp = 1;
		for (j = 0; j < i; j++)
			exp *= 10;
		_putchar((copy / exp) + '0');
		copy = copy % exp;
		count++;
	}
	return (count);
}
