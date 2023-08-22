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
	char *array, extra = ' ';
	int *len = malloc(sizeof(int)), i;

	if (len == NULL)
		return (0);
	*len = 1;
	if (num != 0)
	{
		array = convert_to_string(num, 8, 1, len);
		if (array == NULL)
		{
			free(len);
			return (0);
		}
	}
	if (fg->zero)
		extra = '0';
	if (fg->hash)
	{
		if (num != 0)
			*len += 1;
		if (fg->zero && num != 0)
			cont += _putchar('0');
		for (i = 0; i < md->width - (*len); i++)
			cont += _putchar(extra);
		if (!fg->zero && num != 0)
			cont += _putchar('0');
	}
	else if (md->width)
	{
		for (i = 0; i < md->width - (*len); i++)
			cont += _putchar(extra);
	}
	free(len);
	if (num == 0)
		return (_putchar('0') + cont);
	cont += _puts(array);
	free(array);
	return (cont);
}
