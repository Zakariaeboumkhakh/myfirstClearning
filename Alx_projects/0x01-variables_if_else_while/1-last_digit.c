#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, LSB;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
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
