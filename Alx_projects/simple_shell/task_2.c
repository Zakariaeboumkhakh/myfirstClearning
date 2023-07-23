#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

int my_child(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve(args[0], args, NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&status);
	}
	return (status);
}

void tokenize_args(char *input)
{
	int n_ar = 0;
	char *token = strtok(input, " ");
	char **_tok_args = malloc(sizeof(char *));

	while (token != NULL)

	{
		_tok_args[n_ar] = token;
		n_ar++;
		_tok_args = realloc(_tok_args, (n_ar + 1) * sizeof(char *));
		token = strtok(NULL, " ");
	}
	_tok_args[n_ar] = NULL;

	int child_sts = my_child(_tok_args);

	free(_tok_args);
}

int main(void)
{
	char *buf = NULL;
	size_t buffer_size = 0;
	int n_char;

	while (1)
	{
		write(1, "user134614548$ ", 15);
		n_char = getline(&buf, &buffer_size, stdin);

		if (n_char == -1)
		{
			write(1, "\n", 2);
			free(buf);
			break;
		}

		buf[n_char - 1] = '\0';

		if (n_char == 1)
		{
			continue;
		}

		tokenize_args(buf);

		buf = NULL;
		buffer_size = 0;
	}

	return (0);
}

