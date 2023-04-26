#include "main.h"
/**
 * printf_int - prints a number
 * @ap: the arg list
 * Return: the number of printed characters
 */
int printf_int(va_list ap)
{
	int n = va_arg(ap, int);
	int a = (n < 0) ? (-1 * n) : n;
	int number_of_zeros = 0;
	int i, j, count = 0;
	int divisor = 1;

	while (a >= 10)
	{
		a /= 10;
		number_of_zeros += 1;
	}
	a = (n < 0) ? (-1 * n) : n;

	if (n < 0)
	{
		_putchar('-');
		count++;
	}
	for (i = number_of_zeros; i >= 0; i--)
	{
		divisor = 1;
		for (j = 0; j < i; j++)
		{
			divisor *= 10;
		}
		_putchar((a / divisor) + '0');
		count++;
		a = a % divisor;
	}
	return (count);
}
