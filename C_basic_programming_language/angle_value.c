/*Write a C Program to input two angles from user and find third angle of the triangle.
 *How to find all angles of a triangle if two angles are given by user using C programming.
 *C program to calculate the third angle of a triangle if two angles are given.
 */
#include <stdio.h>
#include <math.h>
int main (void)
{
	int A1, A2, A3;
	printf("Enter the first angle: ");
	scanf("%d", &A1);
	printf("Enter the second angle: ");
	scanf("%d", &A2);
	A3 = 180 - (A1 + A2);
	printf("the value of the third angle is %i\n", A3);
	return (0);
}
