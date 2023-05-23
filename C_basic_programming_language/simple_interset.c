/*Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest.
 *How to calculate simple interest in C programming. Logic to find simple interest in C program.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float P, T, R, Simple_interest;
	printf("Enter the principle: ");
	scanf("%e", &P);
	printf("Enter the time: ");
	scanf("%e", &T);
	printf("Enter the rate: ");
	scanf("%e", &R);
	Simple_interest = (P * T * R) / 100;

	printf("the value of the simple interset is  %f\n", Simple_interest);
	return (0);
}
