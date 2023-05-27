/*Write a C program to input week number(1-7) and print day of week name using switch case.
 * C program to find week day name using switch case. How to find day name of week using switch case in C programming.*/
#include <stdio.h>
int main (void)
{
	int days;
	printf("Enter a number of days: ");
	scanf("%d", &days);
	switch (days)
	{
	case 1:
		printf("monday\n");
		break;
	case 2:
		printf("tuesday\n");
		break;
	case 3:
		printf("wednesday\n");
		break;
	case 4:
		printf("thursday\n");
		break;
	case 5:
		printf("friday\n");
		break;
	case 6:
		printf("saturday\n");
		break;
	case 7:
		printf("sunday\n");
		break;
	default:
		printf("invalid day\n");
	}
		return (0);
}

