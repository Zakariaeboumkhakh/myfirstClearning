/**
 * Write a C program to input a number and check whether number
 *  is even or odd using Conditional/Ternary operator ?:.
 *  How to check even or odd numbers using conditional operator in C program.
 */
#include <stdio.h>
int main (void)
{
	int N;
	printf("could you enter a number:");
	scanf("%i", &N);
	if (N % 2 == 0)
	{
		printf("the number %i is even", N);
	} else
	{
		printf("the number %d is odd", N);
	}
	return (0);
}
