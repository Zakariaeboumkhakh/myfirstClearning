/*Write a C program to input any number from user and check whether
 *the Least Significant Bit (LSB) of the given number is set (1) or not (0).
 *How to check whether the least significant bit of a number is set or unset
 *using bitwise operator in C programming. C program to get the status of
 *least significant bit of a number.
 */
#include <stdio.h>
int main(void)
{
	int N;
	/*example:
	 * N = 1000
	 * to use the formula LSB = N & 1;
	 *     N = 1000
	 *       &	so the least significant bit is 0 because the last number from
	 *       	right is 0;
	 *         0001
	 *	   -----
	 *	   0000
	 */
	printf("Enter any number please: ");
	scanf("%d", &N);
	if (N & 1)
	{
		printf("the least significate of %d is 1 \n", N);
	}
	else
	{
		printf("the least significate of %d is 0 \n", N);
	}
	return (0);
}
