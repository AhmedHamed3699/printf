#include "main.h"

/**
 * get_flag - to set all needed flags
 * @c: flag to set
 * @fg: pointer to flags
 *
 * Return: 1 if a flag is set
 * 0 Otherwise
 */
int get_flag(char c, flags_t *fg)
{
	switch (c)
	{
		case '+':
			fg->plus = 1;
			return (1);
		case '-':
			fg->minus = 1;
			return (1);
		case '0':
			fg->zero = 1;
			return (1);
		case ' ':
			fg->space = 1;
			return (1);
		case '#':
			fg->hash = 1;
			return (1);
		default:
			return (0);
	}
}
