/*Write a C program to input principle (amount), time and rate (P, T, R) and find Compound Interest.
 *How to calculate compound interest in C programming. Logic to calculate compound interest in C program.
 */
#include <stdio.h>
#include <math.h>
int main(void)
{
	float P, T, R, Compound;
	printf("Enter the principle: ");
        scanf("%e", &P);
        printf("Enter the time: ");
        scanf("%e", &T);
        printf("Enter the rate: ");
        scanf("%e", &R);
        Compound = P * pow((1 + R / 100), T);

        printf("the value of the compund  is  %f\n", Compound);
        return (0);
}
