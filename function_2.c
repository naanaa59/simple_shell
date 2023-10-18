#include "sh.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: It returns an integer less  than,  equal to,
 * or greater than zero if s1 is found, respectively,
 * to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i  = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;

	}

	return (s1[i] - s2[i]);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * @std: the standard output
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int std, char c)
{
	return (write(std, &c, 1));
}

