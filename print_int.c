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
	int num = va_arg(args, int), div = 1, digit;

	while (num / div > 9)
		div *= 10;
	while (div > 0)
	{
		digit = (num / div) % 10;
		_putchar('0' + digit);
		div /= 10;
	}
}
