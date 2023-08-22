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
	unsigned char *str = va_arg(args, unsigned char*);
	char *hex = NULL;
	int cont = 0, i, *len;
	(void) fg;
	(void) md;

	if (str == NULL)
		return (_puts(NULL_STR));
	len = malloc(sizeof(int));
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			cont += _puts("\\x");
			hex = convert_to_string(str[i], 16, 0, len);
			if (hex == NULL)
			{
				free(len);
				return (0);
			}
			if (*len == 1)
				cont += _putchar('0') + _putchar(hex[0]);
			else
				cont += _putchar(hex[0]) + _putchar(hex[1]);
			free(hex);
		}
		else
			cont += _putchar(str[i]);
	}
	free(len);
	return (cont);
}
