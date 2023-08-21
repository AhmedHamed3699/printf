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
	
	if (format[0] == '%' &&
			(!format[1] || (format[1] == ' ' && !format[2])))
		return (-1);
	va_start(args, format);
	n_bytes = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[++i] == '%')
			{
				n_bytes += _putchar('%');
				continue;
			}
			pfunc = get_print_func(format[i]);
			if (pfunc != NULL)
				n_bytes += pfunc(args, NULL, NULL);
			else
				n_bytes += _putchar('%') + _putchar(format[i]);
		}
		else
			n_bytes += _putchar(format[i]);
	}
	n_bytes += _putchar(-1);
	va_end(args);
	return (n_bytes);
}
