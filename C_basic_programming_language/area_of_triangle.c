/*Write a C program to input base and height of a triangle and find area of the given triangle.
 *How to find area of a triangle in C programming. Logic to find area of a triangle in C program.
 */
#include <stdio.h>
int main (void)
{
	int base, height, area;
	printf("Enter the base of triangle: ");
	scanf("%d", &base);
	printf("Enter the height of triangle: ");
	scanf("%d", &height);
	area = (base * height) / 2;
	printf("the area of triangle is %d\n", area);
	return (0);
}

