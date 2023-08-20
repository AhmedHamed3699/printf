#include "main.h"

/**
 * print_char - prints a single character
 * @args: The va_list containing the character argument
 * @f: is flag
 * @m: is mod
 *
 * Return: The number of characters printed
 */
int print_char(va_list args, flags *f, modifiers *m)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
