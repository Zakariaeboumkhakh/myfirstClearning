/*Write a C program to input any number from user and set nth bit of the given number as 1.
 * How to set nth bit of a given number using bitwise operator in C programming.
 * Setting nth bit of a given number using bitwise operator.
 */
#include <stdio.h>
int main (void)
{
	int N, bit, X;
	printf("Enter a numbe: ");
	scanf("%d", &N);
	printf("Enter a bit number: ");
	scanf("%d", &bit);
	X = (1 << bit) | N;
	printf("Number after setting bit: %d in decimal\n", X);
	return (0);
}
