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
<<<<<<< HEAD
	int num = va_arg(args, char*);
	
	while (num == 0)
	{
	
		if (num % 2 == 0)
		{
			_putchar(0)
		}
	}
=======
	(void) args;
	(void) fg;
	(void) md;
	return (0);
>>>>>>> 5fd16204c93822535864fc727227f2ed888c04cd
}
