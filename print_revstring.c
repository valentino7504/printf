#include "main.h"

/**
 * printf_revstr - function that prints a str in reverse
 * @ap: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_revstr(va_list ap)
{

	char *s = va_arg(ap, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
