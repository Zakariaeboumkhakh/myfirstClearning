/*Write a C program to input month number and print total number of days in month using switch...case. C program to find total number of days in a month using switch...case. Logic to print number of days in a month using switch...case in C programming.*/
#include <stdio.h>
int main (void)
{
	int N;
	printf("Enter a number among 1 and 12: ");
	scanf("%d", &N);
	switch (N)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Total number of days = 31\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Total number of days = 30\n");
			break;
		case 2:
			printf("total number of days = 28/29 \n");
			break;
		default:
			printf("invalid number of days\n");
	}
	return (0);
}
