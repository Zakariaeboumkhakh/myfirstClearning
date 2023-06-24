/*Write a function that computes the absolute value of an integer.
 *
 * Prototype: int _abs(int);
 * FYI: The standard library provides a similar function: abs. Run man abs to learn more.
 */
#include <stdio.h>
#include <stdlib.h>
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else 
	{
		return (-n);
	}
	return (0);
}

