/**
 * Write a program that prints the alphabet in lowercase, followed by a new line.
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 */
#include <stdio.h>
int main(void)
{
	char x = 'a', y = 'z';
	while (x <= y){
		putchar(x);
		x++;
		
	}
	return (0);
}
