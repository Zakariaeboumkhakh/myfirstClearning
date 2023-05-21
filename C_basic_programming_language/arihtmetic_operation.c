/**
 * Write a C program to input two numbers and perform all arithmetic operations.
 * How to perform all arithmetic operation between two numbers in C programming.
 * C program to find sum, difference, product, quotient and modulus of two given numbers.
 */
#include <stdio.h>
int main (void)
{
	int N1, N2, sum, difference, product, quotient, modulus ;
	puts("could you enter the first number: ");
	scanf("%d", &N1);
	puts("could you enter the second number: ");
	scanf("%d", &N2);
	sum = N1 + N2;
	difference = N1 - N2;
	product = N1 * N2;
	quotient = N1 / N2;
	modulus = N1 % N2;
	printf("the sum is %i\n", sum);
	printf("the difference is %d\n", difference);
	printf("the product is %i\n", product);
	printf("the quotient is %d\n", quotient);
	printf("the modulus is %i\n", modulus);
	return (0);
}

