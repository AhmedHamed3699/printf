#include "main.h"

/**
 * print_S - prints next S
 * @args: arguments pointer
 * @fg: flags associated with the argument
 * @md: modifiers associated with the argument
 *
 * Return: number of printed bytes
 */
int print_S(va_list args, flags_t *fg, modifiers_t *md)
{
	char *str = va_arg(args, char*);
	char *hex;
	int cont = 0, i;
	(void) fg;
	(void) md;

	if (str == NULL)
		return (_puts(NULL_STR));
	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i >= 127])
		{
			cont += _putchar('\\');
			cont += _putchar('x');
			hex = convert_to_string(str[i], 16, 0, NULL);
			if (!hex[1])
				cont += _putchar('0');
			cont += _puts(hex);
		}
		else
		{
			cont += _putchar(str[i]);
		}
	}
	return (cont);
}
