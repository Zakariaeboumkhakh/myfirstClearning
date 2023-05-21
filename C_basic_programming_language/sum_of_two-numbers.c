/**
 * Write a C program to input two numbers from user and calculate their sum.
 * C program to add two numbers and display their sum as output.
 * How to add two numbers in C programming.
 */
#include <stdio.h>
int main(void)
{
	int N1, N2, sum;
	puts("could you enter the first number: ");

	scanf("%i", &N1);
	puts("could you enter the second number: ");
	scanf("%i", &N2);
	sum = N1 + N2;
	printf("the sum of the numbers %d and %i is %d\n: ", N1, N2, sum);
	return (0);
}
