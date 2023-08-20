#include "main.h"

/**
 * get_print_func - get function that corresponds
 * to the specified character
 * @c: specifier character
 *
 * Return: pointer to function
 */
int (*get_print_func(char c))(va_list, flags_t *, modifiers_t *)
{
	specifier_t sp_t[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_decimal},
		{'u', print_unsigned},
		{'i', print_int},
		{'b', print_binary},
		{'o', print_octal},
		{'x', print_hexa_small},
		{'X', print_hexa_capital},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (sp_t[i].sp != NULL && s != NULL)
	{
		if (sp_t[i].sp == c)
			return (sp_t[i].func);
		i++;
	}
	return (NULL);
}
