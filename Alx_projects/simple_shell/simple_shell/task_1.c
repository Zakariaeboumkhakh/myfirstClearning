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

int main(void)
{
	int child_sts;
	char *buf = NULL;
	size_t buffer_size = 0;
	int n_char;
	char **args;
	int i = 0;

	while (1)

	{
		write(1, "user134614548$ ", 15);
		n_char = getline(&buf, &buffer_size, stdin);

		if (n_char == -1)
		{
			printf("\n");
			free(buf);
			break;
		}

		buf[n_char - 1] = '\0';

		if (n_char == 1)
		{
			continue;
		}

		args = malloc(sizeof(char *));
		args[0] = buf;
		args[1] = NULL;
		child_sts = my_child(args);

		free(args);
		buf = NULL;
		buffer_size = 0;
	}

	return (0);
}
