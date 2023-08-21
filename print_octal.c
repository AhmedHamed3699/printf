#include "main.h"

/**
 * print_octal - prints next integer in octal
 * @args: arguments pointer
 * @fg: flags associated with the argument
 * @md: modifiers associated with the argument
 *
 * Return: number of printed bytes
 */
int print_octal(va_list args, flags_t *fg, modifiers_t *md)
{
	unsigned int num = va_arg(args, unsigned int), cont = 0;
	char *array;
	(void) fg;
	(void) md;

	if (num == 0)
		return (_putchar('0'));
	array = convert_to_string(num, 8, 0);
	if (array == NULL)
		return (0);
	cont += _puts(array);
	free(array);
	return (cont);
}
