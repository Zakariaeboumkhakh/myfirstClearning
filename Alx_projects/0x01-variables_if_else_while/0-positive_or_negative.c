/**
 * This program will assign a random number to the variable n each time it is executed. Complete the source code in
 * order to print whether the number stored in the variable n is positive or negative.
 * You can find the source code here
 * The variable n will store a different value every time you will run this program
 * You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
 * The output of the program should be:
 * The number, followed by
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * followed by a new line
 */
#include <stdio.h>
int main (void)
{
	int n;
	printf("could you Enter a number: ");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("the number %d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("the number %d is negative\n", n);
	}
	else
	{
		printf("the number %d  is zero\n", n);
	}
	return (0);
}
