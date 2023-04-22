#include "main.h"
/**
 * strlen - checks the length of a string
 * @s: the string to be checked
 * Return: the length
 */
int _strlen(char *s)
{
	int  i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
