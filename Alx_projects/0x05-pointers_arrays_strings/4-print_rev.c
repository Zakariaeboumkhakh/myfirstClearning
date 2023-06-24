/*Write a function that prints a string, in reverse, followed by a new line.
 *
 * Prototype: void print_rev(char *s);
 */
#include <stdio.h>
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}
