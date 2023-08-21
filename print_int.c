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
	int num = va_arg(args, int), cont = 0;
	char *array;
	(void) fg;
	(void) md;

	if (num == 0)
		return (_putchar('0'));
	if (num < 0)
	{
		cont += _putchar('-');
		num = -num;
	}
	array = convert_to_string(num, 10, 0);
	cont += _puts(array);
	free(array);
	return (cont);
}
