#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

int main()
{
	char *buf = NULL;
	size_t buffer_size = 0;
	int n_char;
	char **array;
	int status, i = 0;
	pid_t pid;
	extern char** environ;

	while (1)
	{
		printf("USER134614548$ ");
		n_char = getline(&buf, &buffer_size, stdin);

		if (n_char == -1) {
			if (feof(stdin)) {
				printf("\n");
				free(buf);
				break;
			} else {
				perror("getline");
				exit(EXIT_FAILURE);
			}
		}

		buf[n_char - 1] = '\0';

		if (n_char == 1) {
			continue;
		}

		array = malloc(sizeof(char *) * 2);
		array[0] = buf;
		array[1] = NULL;

		pid = fork();
		if (pid == -1) {
			perror("fork");
			exit(EXIT_FAILURE);
		} else if (pid == 0) {
			execve(array[0], array, environ);
			perror("execve");
			exit(EXIT_FAILURE);
		} else {
			wait(&status);
		}

		free(array);
		buf = NULL;
		buffer_size = 0;
	}

	return 0;
}

