#include <unistd.h>
/**
 * _putchar - prints a char to stdout
 * @c: the character to be printed
 * Return: 1 on success or -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
