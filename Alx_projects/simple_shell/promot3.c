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
    char *tok;
    char **array;
    int status, i = 0;
    pid_t pid;

    while (1)
    {
        array = malloc(sizeof(char *) * 1000);

        write(1, "user134614548$ ", 15);
        n_char = getline(&buf, &buffer_size, stdin);
        
        if (n_char == -1) {
            perror("getline");
            exit(EXIT_FAILURE);
        }

        tok = strtok(buf, " \t\n");
        while (tok)
        {
            array[i] = tok;
            tok = strtok(NULL, " \t\n");
            i++;
        }
        array[i] = NULL;

        pid = fork();
        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        }
        else if (pid == 0)
        {
            if (execvp(array[0], array) == -1) {
                perror("execvp");
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            // Parent process
            wait(&status);
        }

        i = 0;
        free(array);
        free(buf);
        buf = NULL;
        buffer_size = 0;
    }
}
