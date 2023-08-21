#include "main.h"

/**
 * print_binary - prints next integer in binary
 * @args: arguments pointer
 * @fg: flags associated with the argument
 * @md: modifiers associated with the argument
 *
 * Return: number of printed bytes
 */
int print_binary(va_list args, flags_t *fg, modifiers_t *md)
{
	unsigned int num = va_arg(args, char*), cont = 0;
	char *array;

	if (num == 0)
		return (_putchar('0'));
	array = convert_to_string(num, 2, 0);
	cont += _puts(array);
	free(array);
	return (cont);
}
