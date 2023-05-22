/*Write a C program to input two numbers from user and find their power using pow() function.
 * How to find power of a number in C programming.
 * How to use pow() function in C programming.
 */
#include <stdio.h>
#include <math.h>
int main ()
{
	double long base, expo, power;
	printf("enter a base: ");
	scanf("%Lf", &base);
	printf("enter a expo: ");
	scanf("%Lf", &expo);
	power = pow(base, expo);
	printf("%.2Lf ^ %.2Lf = %.2Lf\n", base, expo, power);
	return (0);
}
