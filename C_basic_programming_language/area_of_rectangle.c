/**
 *Write a C program to input length and width of a rectangle and find area of the given rectangle.
 *How to calculate area of a rectangle in C programming
 *Logic to find area of a rectangle whose length and width are given in C programming.
 */
#include <stdio.h>
int main(void)
{
	int N1, N2, area;
	printf("enter a length: ");
	scanf("%d", &N1);
	printf("enter a width: ");
	scanf("%d", &N2);
	area = N1 * N2;
	printf("area of rectangle = %i sq. units\n", area);
	return (0);
}
