#include "main.h"
/**
 * printf_int - prints an integer to the console
 * @ap: the variable argument list containing the integer to be printed
 * Return: the number of characters printed
 */
int printf_int(va_list ap)
{
	int n = va_arg(ap, int), count = 1;
	int final = n % 10, copy, divisor = 1;

	n /= 10;
	copy = n;

	if (final < 0)
	{
		_putchar('-');
		copy *= -1;
		n *= -1;
		final *= -1;
		count++;
	}
	while ((copy / 10) && copy > 0)
	{
		divisor *= 10;
		copy /= 10;
	}
	copy = n;
	while (divisor > 0 && copy > 0)
	{
		_putchar((copy / divisor) + '0');
		copy -= (copy * divisor);
		divisor /= 10;
		count++;
	}
	_putchar(final + '0');
	return (count);
}
