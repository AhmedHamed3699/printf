#include "main"

/**
 * print_string - prints a string
 * @args: The va_list containing the character argument
 * @fg: is flag
 * @mg: is modi
 *
 * Return: The number of characters printed
 */

int print_string(va_list args, flags *fg, modifiers *mg)
{
	char *str = va_arg(args, char*);

	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}
