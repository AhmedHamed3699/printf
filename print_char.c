#include "main.h"

/**
 * print_char - prints next char
 * @args: arguments pointer
 * @fg: flags associated with the argument
 * @md: modifiers associated with the argument
 *
 * Return: number of printed bytes
 */
int print_char(va_list args, flags_t *fg, modifiers_t *md)
{
	char c = va_arg(args, int);
	int i, cont = 0;
	(void) fg;
	if (md->width)
	{
		for (i = 0; i < md->width - 1; i++)
			cont += _putchar(' ');
	}
	return (_putchar(c) + cont);
}
