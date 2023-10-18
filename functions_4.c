#include "sh.h"

/**
 * exit_command - handle exit command
 *
 * @args: array of tokens
 *
 * @argCount: count of tokens
 *
 * @lineIndex: index of the line in terminal
 *
 * @argv: arguments vector from main
 *
 * @status: the status of the child pid
 *
 * @command: string of the whole given command
 */
void exit_command(char *argv[], char *args[], int argCount,
		int lineIndex, char *command, int *status)
{
	int exit_arg_num = 0, exit_status;
	int alpha;

	if (argCount > 1)
	{
		alpha = _isalpha_string(args[1]);
		if (alpha == 1)
		{
			custom_perror_exit(argv[0], lineIndex,
					"exit: Illegal number: ", args[1]);
			free(command);
			free_grid(args, argCount);
			exit(2);
		}
		else
		{
			exit_arg_num = _atoi(args[1]);
			if (exit_arg_num < 0)
			{
				custom_perror_exit(argv[0], lineIndex,
						"exit: Illegal number: ", args[1]);
				free(command);
				free_grid(args, argCount);
				exit(2);
			}
			else
			{
				free(command);
				free_grid(args, argCount);
				exit(exit_arg_num % 256);
			}
		}
	}
	else
	{
		free(command);
		free_grid(args, argCount);
		exit_status = *status;
		exit(exit_status);
	}
}


