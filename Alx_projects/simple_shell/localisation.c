#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void check_command(char *command)
{
	if (acces(command, F_OK) == 0)
		printf("%s: FOUND", command);
	else
		printf("%s: NOT FOUND", command);
}
int main()
{
	char *buffer = NULL;
	size_t buffer_size;
	ssize_t char;
	char *token;
	while (1)
	{
		write(1, "$", 2);
		char = getline(&buffer, &buffer_size, stdin);
		token = strtok(buffer, " \t\n");
		if (strcmp(token, "which") == 0)
		{
			token = strtok(NULL, " \t\n");
			while (token)
			{
				check_command(token);
				token = strtok(NULL, " \t\n");
			}
		}
		else 
			printf("command doesn't exists\n");
	}
	return (0);
}
