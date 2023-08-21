#include "main.h"
#include <string.h>

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
	int i, cont = 0;
	(void) fg;

	str = va_arg(args, char*);
	if (str == NULL)
		str = NULL_STR;
	if (md->width)
	{
		for (i = 0; i < md->width - (int)(strlen(str)); i++)
			cont += _putchar(' ');
	}
	return (_puts(str) + cont);
}
