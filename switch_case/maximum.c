/*Write a C program to input two numbers from user and find maximum between two numbers using switch case. How to find maximum or minimum between two numbers using switch case. Logic to find maximum between two numbers using switch case in C programming.*/
#include <stdio.h>
int main (void)
{
	int N1, N2;
	printf("Enter the first number: ");
	scanf("%d", &N1);
	printf("Enter the second number: ");
	scanf("%d", &N2);
	switch (N2 > N1)
	{
		case 0:
			printf("Number %d is the maximum\n", N1);
			break;
		case 1:
			printf("Number %d is the maximum\n", N2);
			break;
	}
	return (0);
}
