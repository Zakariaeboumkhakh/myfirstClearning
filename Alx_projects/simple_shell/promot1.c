#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
	char* buffer = NULL;
	size_t buffer_size = 0;
	int character_n = 0;

	while (1) {
		printf("USER134614548$ ");

		character_n = getline(&buffer, &buffer_size, stdin);

		if (character_n == -1) {
			// Check for "end of file" condition (Ctrl+D)
			// Exit the loop and terminate the shell
			break;
		}

		// Remove the trailing newline character, if present
		if (buffer[character_n - 1] == '\n') {
			buffer[character_n - 1] = '\0';
		}

		// Check if the user entered "exit" to terminate the shell
		if (strcmp(buffer, "exit") == 0) {
			break;
		}
	}

	// Clean up and exit the shell
	free(buffer);
	return 0;
}

