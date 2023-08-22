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
<<<<<<< HEAD
	long num = va_arg(args, long), cont = 0;
	char *array;
	(void) fg;
	(void) md;
=======
	int num = va_arg(args, int), cont = 0, i;
	char *array = NULL;
	char extra = ' ', sign = 0;
	int *len = malloc(sizeof(int));
>>>>>>> 4f51e9ec64817fdc2f7b3109d0aaa6bbfb5d31b9

	if (len == NULL)
		return (0);
	*len = 1;
	sign = (fg->plus) ? '+' : (fg->space) ? ' ' : 0;
	if (num < 0)
	{
<<<<<<< HEAD
		cont += _putchar('-');
		array = convert_to_string(-1L * num, 10, 0);
	}
	else
		array = convert_to_string(num, 10, 0);

=======
		sign = '-';
		array = convert_to_string(-1L * num, 10, 0, len);
	}
	else if (num > 0)
		array = convert_to_string(num, 10, 0, len);
	if (array == NULL && num != 0)
	{
		free(len);
		return (0);
	}
	if (sign)
		*len += 1;
	if (fg->zero)
		extra = '0';
	if ((!md->width && sign) || (md->width && fg->zero && sign))
		cont += _putchar(sign);
	if (md->width)
	{
		for (i = 0; i < md->width - (*len); i++)
			cont += _putchar(extra);
		if (!fg->zero && sign)
			cont += _putchar(sign);
	}
	free(len);
	if (num == 0)
		return (_putchar('0') + cont);
>>>>>>> 4f51e9ec64817fdc2f7b3109d0aaa6bbfb5d31b9
	cont += _puts(array);
	free(array);
	return (cont);
}
