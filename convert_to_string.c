#include "main.h"

/**
 * convert_to_string - convert number in any base to string
 * @n: the number to be converted
 * @base: base of the number
 * @small: to choose capital or small case
 *
 * Return: converted string
 */
char *convert_to_string(unsigned int n, int base, int small)
{
	char *digits = "0123456789ABCDEF";
	char *str;
	unsigned int size, n_tmp;
	int i;

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
	if (str == NULL)
		return (NULL);
	i = size;
	str[i--] = '\0';
	for (; i >= 0; n /= base)
		str[i--] = digits[n % base];

	return (str);
}
