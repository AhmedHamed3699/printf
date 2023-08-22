#include "main.h"

/**
 * print_address - prints address in hexadecimal
 * @args: arguments pointer
 * @fg: flags associated with the argument
 * @md: modifiers associated with the argument
 *
 * Return: number of printed bytes
 */
int print_address(va_list args, flags_t *fg, modifiers_t *md)
{
	unsigned long int num = va_arg(args, unsigned long int), cont = 0;
	char *array, extra = ' ';
	int *len = malloc(sizeof(int)), i;

	if (len == NULL)
		return (0);
	if (num == 0)
	{
		free(len);
		return (_puts("(nil)"));
	}
	*len = 1;
	if (num != 0)
	{
		array = convert_to_string(num, 16, 1, len);
		if (array == NULL)
		{
			free(len);
			return (0);
		}
	}
	if (fg->zero)
		extra = '0';
	if (num != 0)
		*len += 2;
	if (fg->zero && num != 0)
		cont += _puts("0x");
	for (i = 0; i < md->width - (*len); i++)
		cont += _putchar(extra);
	if (!fg->zero && num != 0)
		cont += _puts("0x");
	cont += _puts(array);
	free(len);
	free(array);
	return (cont);
}
