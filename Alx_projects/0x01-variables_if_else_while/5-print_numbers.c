/*Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * All your code should be in the main function
 */
#include <stdio.h>
int main(void)
{
	int n;
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
