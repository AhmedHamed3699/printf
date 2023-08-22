#include "main.h"

/**
 * _printf - prints formatted string into stdout
 * @format: the format of the string
 *
 * Return: number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, n_bytes;
	int (*pfunc)(va_list, flags_t *, modifiers_t *);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	n_bytes = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		flags_t flags = FLAG_INIT;
		modifiers_t modifiers = MOD_INIT;
		(void) flags;
		(void) modifiers;

		if (format[i] == '%')
		{
			if (!format[++i] || (format[i] == ' ' && !format[i + 1]))
				return (-1);
			if (format[i] == '%')
			{
				n_bytes += _putchar('%');
				continue;
			}
			while (get_flag(format[i], &flags))
				i++;
			while (get_modifier(format[i], &modifiers))
				i++;
			pfunc = get_print_func(format[i]);
			n_bytes += (pfunc != NULL) ? pfunc(args, &flags, &modifiers) :
				(_putchar('%') + _putchar(format[i]));
		}
		else
			n_bytes += _putchar(format[i]);
	}
	n_bytes += _putchar(-1);
	va_end(args);
	return (n_bytes);
}
