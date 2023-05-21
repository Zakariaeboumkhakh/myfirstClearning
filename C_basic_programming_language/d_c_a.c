/**
 * Write a C program to input radius of a circle from user and find diameter,
 * circumference and area of the circle. How to calculate diameter,
 * circumference and area of a circle whose radius is given by user in C programming.
 * Logic to find diameter, circumference and area of a circle in C.
 */
#include <stdio.h>
int main(void)
{
	float p = 3.14, radius, D, C, Area;
	printf("enter a radius: ");
	scanf("%f", &radius);
	C = (2 * p * radius);
	D = (2 * radius);
	Area = (p * radius * radius);
	printf("the diameter is %.0f\n", D);
	printf("the circumference is %.0f\n", C);
	printf("the Area is %.0f\n", Area);
	return (0);
}


