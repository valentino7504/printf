#include "main.h"
/**
 * printf_b - prints binary of an unsigned int
 * @ap: the variable arguments
 * Return: the number of characters printed
 */
int printf_b(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int count = 0, i, flag = 0;
	char *binary = malloc(32 * sizeof(char));

	if (binary == NULL)
	{
		return (0);
	}
	if (n == 0)
	{
		_putchar('0');
		free(binary);
		return (1);
	}
	for (i = 0; i < 32; i++)
		binary[i] = ' ';
	i = 31;
	while (n > 0)
	{
		if (n % 2 == 1)
			flag = 1;
		if (flag)
		{
			binary[i] = (n % 2) + '0';
			i--;
		}
		n /= 2;
	}
	for (i = 0; i < 32; i++)
	{
		if (binary[i] != ' ')
		{
			_putchar(binary[i]);
			count++;
		}
	}
	free(binary);
	return (count);
}
