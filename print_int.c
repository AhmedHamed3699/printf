#include "main.h"

/**
 * print_int - prints next integer
 * @args: arguments pointer
 * @fg: flags associated with the argument
 * @md: modifiers associated with the argument
 *
 * Return: number of printed bytes
 */
int print_int(va_list args, flags_t *fg, modifiers_t *md)
{
	if (str == NULL)
		return (-1)
	char *str = va_arg(args, char *);
	int i = 0;

	while (str[i] != '\0')
		i++;
	_putchar('0' + i);
}
