/*Write a C program to input a number and find square root of the given number.
 * How to find square root of a number in C programming using inbuilt sqrt() function.
 * How to use predefined sqrt() function to find square root in C program.
 */
#include <stdio.h>
#include <math.h>
int main(void)
{
	float sq ;
	printf("enter a number: ");
	scanf("%f", &sq);
	sqrt(sq);
	printf("%.0f\n", sqrt(sq));
	return (0);
}
