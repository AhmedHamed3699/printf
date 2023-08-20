#include "main.h"

/**
 * print_string - prints a string
 * @args: The va_list containing the character argument
 * @fg: is flag
 * @mg: is modi
 *
 * Return: The number of characters printed
 */

int print_string(va_list args, flags_t *fg, modifiers_t *mg)
{
	char *str = va_arg(args, char*);

	_puts(str);
}
