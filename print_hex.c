#include "main.h"

/**
 * print_hex_small - prints next integer
 * in lower-case hexadecimal
 * @args: arguments pointer
 * @fg: flags associated with the argument
 * @md: modifiers associated with the argument
 *
 * Return: number of printed bytes
 */
int print_hex_small(va_list args, flags_t *fg, modifiers_t *md)
{
	unsigned int num = va_arg(args, unsigned int), cont = 0;
	char *array;
	int *len = malloc(sizeof(int));
	(void) fg;
	(void) md;
	if (num == 0)
		return (_putchar('0'));
	array = convert_to_string(num, 16, 1, len);
	if (array == NULL)
		return (0);
	if (fg->hash && array[0] != '0')
		cont += _puts("0x");
	cont += _puts(array);
	free(array);
	free(len);
	return (cont);
}

/**
 * print_hex_capital - prints next integer
 * in upper-case hexadecimal
 * @args: arguments pointer
 * @fg: flags associated with the argument
 * @md: modifiers associated with the argument
 *
 * Return: number of printed bytes
 */
int print_hex_capital(va_list args, flags_t *fg, modifiers_t *md)
{
	unsigned int num = va_arg(args, unsigned int), cont = 0;
	char *array;
	int *len = malloc(sizeof(int));
	(void) fg;
	(void) md;
	if (num == 0)
		return (_putchar('0'));
	array = convert_to_string(num, 16, 0, len);
	if (array == NULL)
		return (0);
	if (fg->hash && array[0] != '0')
		cont += _puts("0X");
	cont += _puts(array);
	free(array);
	free(len);
	return (cont);
}
