/*Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 *
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 */
#include <stdio.h>
int main(void)
{
	unsigned char n = 0;
	while (n <= 15)
	{
		if (n < 10)
			putchar('0' + n);
		else
			putchar('a' + n - 10);
		n++;
		}
		return (0);
}	
