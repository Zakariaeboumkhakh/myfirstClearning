/*Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 */
#include <stdio.h>
void print_alphabet(void)
{
	char x = 'a';
	while (x >= 'a' && x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
