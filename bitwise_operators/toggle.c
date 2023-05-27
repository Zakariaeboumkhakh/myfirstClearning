/*Write a C program to input any number from user and toggle or invert or flip nth bit of the given number using bitwise operator. How to toggle nth bit of a given number using bitwise operator in C programming. C program set nth bit of a given number if it is unset otherwise unset if it is set.*/
#include <stdio.h>
int main (void)
{
	int N, bit, res;
	printf("Enter a number: ");
	scanf("%d", &N);
	printf("Enter a bit number: ");
	scanf("%d", &bit);
	res = N ^ (1 << bit);
	printf("After toggling %d bit: %d (in decimal)\n", N, res);
	return (0);
}
