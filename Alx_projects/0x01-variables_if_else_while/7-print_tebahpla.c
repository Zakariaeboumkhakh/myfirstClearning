/*Write a program that prints the lowercase alphabet in reverse, followed by a new line.
 *
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 */
#include <stdio.h>
int main(void)
{
	char x = 'a', y = 'z';
	while (y >= x)
	{
		putchar(y);
		y--;
	}
	return (0);
}
