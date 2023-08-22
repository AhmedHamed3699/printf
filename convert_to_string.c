#include "main.h"

/**
 * convert_to_string - convert number in any base to string
 * @n: the number to be converted
 * @base: base of the number
 * @small: to choose capital or small case
 * @len: lenth of printed string, which is passed by ref
 *
 * Return: converted string
 */
<<<<<<< HEAD
char *convert_to_string(unsigned long n, int base, int small)
{
	char *digits = "0123456789ABCDEF";
	char *str;
	unsigned long size, n_tmp;
	long i;
=======
char *convert_to_string(unsigned int n, int base, int small, int *len)
{
	char *digits = "0123456789ABCDEF";
	char *str;
	unsigned int n_tmp;
	int i, size;
>>>>>>> 4f51e9ec64817fdc2f7b3109d0aaa6bbfb5d31b9

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
	*len = size;
	str[i--] = '\0';
	for (; i >= 0; n /= base)
		str[i--] = digits[n % base];

	return (str);
}
