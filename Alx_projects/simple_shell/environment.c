/*Write a program that prints the environment using the global variable environ.*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)**av;
	char *path = getenv("PATH");
	if (path != NULL)
	{
		printf("the value of the path is %s\n", path);
	}
	else
	{
		printf("the environment not FOUND. \n");
	}
	return (0);
}
