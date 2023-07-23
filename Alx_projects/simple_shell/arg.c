#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char *av[])
{


	if (ac > 1)
	{
		if (execvp(av[1], &av[1]) == -1)
		{
			perror("execvp");
			exit(EXIT_FAILURE);
		}
	}
	return 0;

}
