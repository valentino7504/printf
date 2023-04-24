#include "main.h"
/**
 * printf_int - prints an integer to the console
 * @ap: the variable argument list containing the integer to be printed
 *
 * Return: the number of characters printed
 */
int printf_int(va_list ap)
{
	int n = va_arg(ap, int), temp;
	int count = 0;
	int divisor = 1;

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
	temp = n;
	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor >= 1)
	{
		_putchar((n / divisor) + '0');
		divisor /= 10;
		count++;
	}
	return (count);
}
