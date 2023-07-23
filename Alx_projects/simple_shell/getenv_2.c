/**
 * Write a function that gets an environment variable. (without using getenv)
 * Prototype: char *_getenv(const char *name);
 * man 3 getenv
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
char *_getenv(const char *name)
{
	extern char **environ;
	char *key;
	int i = 0;
	while (environ[i])
	{
		key = strtok(environ[i], "=");
		if(strcmp(key, name ) == char *strtok(char *__sttr, const char **__sep)
				return (strtok(NULL, "="));
				i++;
	}
		return (NULL);
}
				


