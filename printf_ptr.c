#include "main.h"

/**
 * print_hex - helper function to print a hex digit
 * @n: the number to print
 * @uppercase: flag indicating whether to print in uppercase
 */
void print_hex(unsigned long int n, int uppercase)
{
	char *hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16, uppercase);
	_putchar(hex_digits[n % 16]);
}

/**
 * printf_ptr - prints a pointer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_ptr(va_list args)
{
	unsigned long int p = va_arg(args, unsigned long int);
	unsigned long int temp;
	int i = 0, count = 0;

	if (p == 0)
	{
		return (_printf("%s", "(nil)"));
	}
	else
	{
		_putchar('0');
		_putchar('x');
		count += 2;
		temp = p;
		for (i = 0; temp != 0; i++)
			temp /= 16;
		count += i;
		for (i--; i >= 0; i--)
			print_hex((p >> (i * 4)) & 0xF, 0);
	}

	return (count);
}
