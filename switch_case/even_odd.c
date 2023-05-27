/*Write a C program to input number from user and check whether the number is even or odd using switch case. How to check even or odd using switch case in C programming. Logic to check whether a number is even or odd using switch case in C program.*/
#include <stdio.h>
int main(void)
{
	int N;
	printf("Enter a number: ");
	scanf("%d", &N);
	switch (N % 2 == 0)
	{
		case 0:
			printf("the number %d is odd \n ", N);
			break;
		case 1:
			printf("the number %d is even\n ", N);
			break;
	}
	return (0);
}
