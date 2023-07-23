#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
	pid_t parent_pid = getppid();
	printf("%i\n", parent_pid);
	return 0;
}
