/**
 *This program will assign a random number to the variable n each time it is executed. Complete the source code in
 *order to print the last digit of the number stored in the variable n.
 *You can find the source code here
 *The variable n will store a different value every time you run this program
 *You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
 *The output of the program should be:
 *The string Last digit of, followed by n, followed by the string is, followed by
 *if the last digit of n is greater than 5: the string and is greater than 5
 *if the last digit of n is 0: the string and is 0
 *if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
 *followed by a new line
 */
#include <stdio.h>
int main(void)
{
	int n, LSB;
	printf("could you enter a number :");
	scanf("%d", &n);
	LSB = n % 10;
	if (LSB > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, LSB);
	}
	else if (LSB < 6 && LSB != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, LSB);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, LSB);
	}
	return (0);
}
