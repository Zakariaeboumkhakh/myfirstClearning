/*Write a C program to input any number from user and check whether the Least Significant Bit (LSB) of the given number
 *is set (1) or not (0). How to check whether the least significant bit of a number is set or
 *unset using bitwise operator in C programming. C program to get the status of least significant bit of a number.
 */
#include <stdio.h>
int main(void)
{
	int N1;
	printf("Enter a number: ");
	scanf("%i", &N1);

	if (N1 & 1 == 1)
	{
		printf("the last signaficat bit of %d is set 1\n", N1);
	}
	else
	{
		printf("the last signaficat bit of %d is set 0\n", N1);
	}
	return (0);
}
