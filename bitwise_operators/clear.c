/*Write a C program to input any number from user and clear the nth bit of the given number using bitwise operator. How to clear nth bit of a given number using bitwise operator in C programming. How to unset (0) the value of nth bit of a given number in C.*/
#include <stdio.h>
int main (void)
{
	int N, bit, Z;
	printf("Enter a number:");
	scanf("%d", &N);
	printf("Enter a bit number: ");
	scanf("%d", &bit);
	Z = N & (~(1 << bit));
	printf("Number after clearing %d bit: %d (in decimal)\n", bit, Z);
	return (0);
}
