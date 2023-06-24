/*Write a function that checks for uppercase character.
 *
 * Prototype: int _isupper(int c);
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 * FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.
 */

#include <stdio.h>
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

