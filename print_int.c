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
	int i;
	int *len = malloc(sizeof(int));

	if (num < 0)
	{
		cont += _putchar('-');
		array = convert_to_string(-1L * num, 10, 0, len);
	}
	else
	{
		if (fg->plus)
			cont += _putchar('+');
		else if (fg->space)
			cont += _putchar(' ');
		if (num == 0)
			return (_putchar('0') + cont);
		array = convert_to_string(num, 10, 0, len);
	}

	if (array == NULL)
		return (0);

	if (fg->plus || num < 0)
		*len += 1;
	if (fg->zero)
	{
		for (i = 0; i < md->width - (*len); i++)
			cont += _putchar('0');
	}
	cont += _puts(array);
	free(array);
	free(len);
	return (cont);
}
