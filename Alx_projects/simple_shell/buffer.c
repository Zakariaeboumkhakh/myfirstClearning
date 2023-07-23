/*Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line.man 3 getline*/
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
int main(int ac, char **av)
{
	(void)ac;
	char *buf = NULL;
	size_t size_buf = 0;
	int n = 0;
	write(1, "$", 2);
	n = getline(&buf, &size_buf, stdin);
	if (n == -1)
		perror("getline");
	printf("%s\n", buf);
	return (0);
}


