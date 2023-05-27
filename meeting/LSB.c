/*Write a C program to input any number from user and check whether the Least Significant Bit (LSB) of the given number is set (1) or not (0). How to check whether the least significant bit of a number is set or unset using bitwise operator in C programming. C program to get the status of least significant bit of a number.*/
#include <stdio.h>
int main (void)
{
	int x;
	printf("Enetr a number : ");
	scanf("%d", &x);
	if (x & 1)
	{
		printf("Least Significant Bit of %d is set (1)\n.", x);
	}
	else
	{
		printf("Least Significant Bit of %d is set (0)\n.", x);
	}
	return (0);
}
