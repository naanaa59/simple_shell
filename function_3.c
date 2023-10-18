#include "sh.h"
/**
 * print_number - prints an integers
 *
 * @n: the integer to be printed
 */
void print_number(int std, int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar(std, '-');
		i = -n;
	}
	else
	{
		i = n;
	}
	if (i / 10)
		print_number(std, i / 10);
	_putchar(std, i % 10 + '0');
}
/**
 * custom_perror - prints the error of "sh: 1: lf: not found"
 *
 * @program_name: the exec name
 *
 * @line: number of the line in sh
 *
 * @command: command name
 */

void custom_perror(char *program_name, int line, char *prefix, char *command)
{

	char *suffix = ": ";
	char *new_line = "\n";


	write(STDERR_FILENO, program_name, _strlen(program_name));
	write(STDERR_FILENO, suffix, _strlen(suffix));
	print_number(2, line);
	write(STDERR_FILENO, suffix, _strlen(suffix));
	write(STDERR_FILENO, command, _strlen(command));
	write(STDERR_FILENO, prefix, _strlen(prefix));
	write(STDERR_FILENO, new_line, _strlen(new_line));
}

