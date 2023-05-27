/*Write a C program to input any number from user and check whether Most Significant Bit
 * (MSB) of given number is set (1) or not (0).
 * How to check whether Most Significant Bit of any given number is set or not using bitwise
 * operator in CprogrammingC program to get the status of the most significant bit of a number
 */
#include <stdio.h>
int main (void)
{
	int N;
	printf("Enter any number: ");
	scanf("%d", &N);

	if (((N >> (sizeof(int) * 8 - 1))) & 1)
	{
		printf("Most Significant Bit (MSB) of %d is set (1)\n", N);
	}
	else
	{
		printf("Most Significant Bit (MSB) of %d is set (0)\n", N);
	}
	return (0);
}
