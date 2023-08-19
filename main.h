#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* STRUCTS */

/**
 * struct flags - struct for flags
 * @plus: flag for the '+' character
 * @minus: flag for the '-' character
 * @zero: flag for the '0' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 *
 * Description: struct to store all flags for the specifier
 * flag is set to 1 if used, 0 otherwise
 */
typedef struct flags
{
	int plus;
	int minus;
	int zero;
	int space;
	int hash;
} flags_t;

/**
 * struct modifiers - struct for modifiers
 * @length_l: length modifier for the 'l' character
 * @length_h: length modifier for the 'h' character
 * @width: minimum width to print
 * @precision: precision of the number
 *
 * Description: struct to store all modifiers for the specifier
 * modifier is set to 1 if used, 0 otherwise
 */
typedef struct modifiers
{
	int length_l;
	int length_h;

	int width;
	int precision;
} modifiers_t;

/**
 * struct specifier - struct for specifier
 * @sp: the specifier character
 * @func: pointer to the needed print function
 *
 * Description: struct to choose
 * the appropriate printing function for the specifier
 */
typedef struct specifier
{
	char sp;
	int (*func)(va_list, flags *, modifiers *);
} specifier_t;

#endif
