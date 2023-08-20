#include "main"

/**
 * print_string - prints a string
 * @args: The va_list containing the character argument
 * @f: is flag
 * @m: is modi
 *
 * Return: The number of characters printed
 */

int print_string(va_list args, flags *f, modifiers *m)
{
	char *str = va_arg(args, char*);

	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
