#include "main.h"

/**
 * print_rev - prints rev string
 * @args: arguments pointer
 * @fg: flags associated with the argument
 * @md: modifiers associated with the argument
 *
 * Return: number of printed bytes
 */
int print_rev(va_list args, flags_t *fg, modifiers_t *md)
{
	int i = 0, cont = 0;
	char *str = va_arg(args, char*);
	(void) fg;
	(void) md;

	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	while (i--)
		cont += _putchar(str[i]);
	return (cont);
}
