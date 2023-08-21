#include "main.h"

/**
 * convert_to_string - convert number in any base to string
 * @n: the number to be converted
 * @base: base of the number
 * @small: to choose capital or small case
 *
 * Return: converted string
 */
char *convert_to_string(unsigned long n, int base, int small)
{
	char *digits = "0123456789ABCDEF";
	char *str;
	unsigned long size, n_tmp;
	long i;

	if (small)
		digits = "0123456789abcdef";
	size = 0;
	n_tmp = n;
	while (n_tmp)
	{
		n_tmp /= base;
		size++;
	}

	str = malloc((size + 1) * sizeof(char));
	i = size;
	str[i--] = '\0';
	for (; i >= 0; n /= base)
		str[i--] = digits[n % base];

	return (str);
}
