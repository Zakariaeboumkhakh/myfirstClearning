/*Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 * Prototype: void more_numbers(void);
 * You can only use _putchar three times in your code
 */
#include <stdio.h>
void more_numbers(void)
{
	int i = 0, j = 0 ;
	for (i=0;i<10;i++)
	{
		while(j <= 14)
		{
			putchar('0'+ j);
			j++;
		}
		putchar('\n');
	}
}
