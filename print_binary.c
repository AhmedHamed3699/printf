#include "main.h"

/**
 * print_binary - prints next integer in binary
 * @args: arguments pointer
 * @fg: flags associated with the argument
 * @md: modifiers associated with the argument
 *
 * Return: number of printed bytes
 */
int print_binary(va_list args, flags_t *fg, modifiers_t *md)
{
	int num = va_arg(args, char*);
	
	while (num == 0)
	{
	
		if (num % 2 == 0)
		{
			_putchar(0)
		}
	}
}
