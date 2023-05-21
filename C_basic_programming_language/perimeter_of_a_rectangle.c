/**
 *Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle.
 *How to find perimeter of a rectangle in C programming.
 *Logic to find the perimeter of a rectangle if length and width are given in C programming
 */
#include <stdio.h>
int main(void)
{
	int N1, N2, perimeter;
	printf("enter a lenght: ");
	scanf("%d", &N1);
	puts("enter a width: ");
	scanf("%i", &N2);
	perimeter = 2 * (N1 + N2);
	printf("the perimeter is %i\n", perimeter);
	return (0);
}
