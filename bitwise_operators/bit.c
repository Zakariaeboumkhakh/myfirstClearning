/*Write a C program to input any number from user and check whether nth bit of the given number
 *is set (1) or not (0). How to check whether nth bit of a given number is set or unset using
 *bitwise operator in C programming. C program to get the status of nth bit of a number.
 */
#include <stdio.h>
int main(void)
{
	int N, bit;
	printf("Enter a number:");
	scanf("%d", &N);
	printf("Enter a bit number:");
	scanf("%d", &bit);
	if ((N >> bit) & 1)
	{
		printf("%d bit of %d is set (1)\n", bit, N);
	}
	else
	{
		printf("%d bit of %d is set (0)\n", bit, N);
	}
	return (0);
}

