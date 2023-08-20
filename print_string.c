#include "main.h"

/**
 * print_string - prints a string
 * @args: The va_list containing the character argument
 * @fg: is flag
 * @md: is modi
 *
 * Return: The number of characters printed
 */

int print_string(va_list args, flags_t *fg, modifiers_t *md)
{
	char *str;
	(void) fg;
	(void) md;

	str = va_arg(args, char*);
	if (str == NULL)
		str = NULL_STR;
	return (_puts(str));
}
