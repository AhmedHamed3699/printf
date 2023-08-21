#include "main.h"

/**
 * get_modifier - to set all needed modifiers
 * @c: modifier to set
 * @md: pointer to modifiers
 *
 * Return: 1 if a modifier is set
 * 0 Otherwise
 */
int get_modifier(char c, modifiers_t *md)
{
	if (c == 'l')
		md->length_l = 1;
	else if (c == 'h')
		md->length_h = 1;
	else if (c >= '0' && c <= '9')
	{
		md->width *= 10;
		md->width += c - '0';
	}
	else
		return (0);
	return (1);
}
