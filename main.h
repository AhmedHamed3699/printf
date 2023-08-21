#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

#define NULL_STR "(null)"
#define FLAG_INIT {0, 0, 0, 0, 0}
#define MOD_INIT {0, 0, 0, 0}

/************* STRUCTS *************/

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
	int (*func)(va_list, flags_t *, modifiers_t *);
} specifier_t;

/************* FUNCTIONS *************/

/* write functions */
int _putchar(char c);
int _puts(char *str);

/* printf function */
int _printf(const char *format, ...);

/* get functions */
int (*get_print_func(char c))(va_list, flags_t *, modifiers_t *);
int get_flag(char c, flags_t *fg);
int get_modifier(char c, modifiers_t *md);

/* helper functions */
char *convert_to_string(int n, int base);

/* print functions */
int print_char(va_list args, flags_t *fg, modifiers_t *md);
int print_string(va_list args, flags_t *fg, modifiers_t *md);
int print_int(va_list args, flags_t *fg, modifiers_t *md);
int print_unsigned(va_list args, flags_t *fg, modifiers_t *md);
int print_decimal(va_list args, flags_t *fg, modifiers_t *md);
int print_binary(va_list args, flags_t *fg, modifiers_t *md);
int print_octal(va_list args, flags_t *fg, modifiers_t *md);
int print_hex_small(va_list args, flags_t *fg, modifiers_t *md);
int print_hex_capital(va_list args, flags_t *fg, modifiers_t *md);

#endif
