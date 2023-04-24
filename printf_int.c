#include "main.h"
/**
 * printf_int - prints an integer to the console
 * @ap: the variable argument list containing the integer to be printed
 * Return: the number of characters printed
 */
int printf_int(va_list ap)
{
	int n = va_arg(ap, int), count = 0, digit, exp = 1;
	int n_copy = n;

	if (n_copy == 0)
	{
		_putchar('\0');
		return (1);
	}
	if (n_copy < 0)
	{
		_putchar('-');
		n_copy = -n_copy;
		count++;
	}
	while (n_copy/exp)
		exp *= 10;
	exp /= 10;
	while (exp)
	{
		digit = n_copy / exp;
		_putchar(digit + '0');
		n_copy -= (digit * exp);
		exp /= 10;
		count++;
	}
	return (count);
}
