#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (int ac, char **av)
{
	(void)ac;
	(void)**av;

	char *buffer = NULL;
	size_t buffer_size = 0;
	int character_n = 0;
	int i = 0;
	while (1){
	printf("USER134614548$");

	character_n = getline(&buffer, &buffer_size, stdin);

	if (character_n == -1)
	{
		perror("getline");
		exit(EXIT_FAILURE);
		break;

	}
	}
	printf("%s\n", buffer);
	buffer[character_n - 1] = '\0';
	return (0);

}
