#include "sh.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: the string to convert
 *
 * Return: int value of the string.
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int i, sign = 1;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}

	}
	return (num * sign);
}


/**
 * _strlen - returns the length of a string.
 *
 * @s: given string
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int l = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}
/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: the given string to print
 *
 * @std: the standard output.
 */
void _puts(int std, char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(std, str[i]);
	}
	_putchar(std, '\n');
}

