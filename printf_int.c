#include "main.h"
/**
 * printf_int - prints integer
 * @ap: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list ap)
{
	int n = va_arg(ap, int);
	int copy, final = n % 10, divisor = 1;
	int count = 1;
	int place;

	n /= 10;
	copy = n;
	if (n < 0)
	{
		copy = -copy;
		n = -n;
		final = -final;
		count++;
		_putchar('-');
	}
	if (copy > 0)
	{
		while (copy / 10)
		{
			divisor = divisor * 10;
			copy /= 10;
		}
		copy = n;
		while (divisor > 0)
		{
			place = copy / divisor;
			_putchar((copy / divisor) + '0');
			copy -= (place * divisor);
			divisor /= 10;
			count++;
		}
	}
	_putchar(final + '0');

	return (count);
}
