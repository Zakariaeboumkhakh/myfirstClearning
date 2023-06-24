/*Write a function that prints the numbers, from 0 to 9, followed by a new line.
 *
 * Prototype: void print_numbers(void);
 * You can only use _putchar twice in your code
 */
#include <stdio.h>
void print_numbers(void);

void print_numbers(void)
{
	int i = 0;
	while (i <= 9)
	{
		{
			putchar('0' + i);
			i++;
		}
	}
	putchar('\n');
}

