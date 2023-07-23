/**
 * Write a program that prints the address of env (the third parameter of the main function) and environ (the global variable).
 * Are they they same? Does this make sense?
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)**av;
	extern char **environ;
	printf("the address of env is %p\n", env);

	printf("the address of environ is %\n", environ);
	return (0);
}
