#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
int child(){
	pid_t pid;
	int status;
	char **array;
	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	} else if (pid == 0)
	{
		execve(array[0], array, NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	} else
	{
		wait(&status);
	}

}

int main(void)
{
	int child_pfc;
	char *buf = NULL;
	size_t buffer_size = 0;
	int n_char;
	char **array;
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

		array = malloc(sizeof(char *) * 2);
		array[0] = buf;
		array[1] = NULL;
		child_pfc = child();

		free(array);
		buf = NULL;
		buffer_size = 0;
	}

	return (0);
}
