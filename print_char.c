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
	(void) fg;
	(void) md;
	return (_putchar(c));
}
