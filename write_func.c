#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: cur if buffer is to be emptied
 * Otherwise return 0
 */
int _putchar(char c)
{
	static char buffer[BUFFER_SIZE];
	static int cur;
	int ret = 0;

	if (c == -1 || cur >= BUFFER_SIZE)
	{
		write(1, &buffer, cur);
		ret = cur;
		cur = 0;
	}
	buffer[cur] = c;
	cur++;
	return (ret);
}

/**
 * _puts - prints a string
 * @str: The string to be printed
 *
 * Return: cur if buffer is to be emptied
 * Otherwise return 0
 */
int _puts(char *str)
{
	int i, ret;

	if (str == NULL)
		return (-1);
	i = 0;
	ret = 0;
	while (str[i] != '\0')
		ret += _putchar(str[i++]);

	return (ret);

}
