/*Write a C program to input side of an equilateral triangle from user and find area of the given triangle
 *How to find area of an equilateral triangle in C programming.
 *C program to calculate area of an equilateral triangle if its side is given.
 */
#include <stdio.h>
#include <math.h>
int main (void)
{
	float eg, area;
	printf("Enter a value of equilateral triangle: ");
	scanf("%e", &eg);
	area = (sqrt(3) / 4) * (eg * eg);
	printf("Area of equilateral triangle is %f\n", area);
	return (0);
}
