#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @str: The string to be printed
 *
 * Return: On success size of string is returned
 * On error, -1 is returned
 */
int _puts(char *str)
{
	int i;

	if (str == NULL)
		return (-1);
	i = 0;
	while (str[i] != '\0')
		_putchar(str[i++]);

	return (i);

}
