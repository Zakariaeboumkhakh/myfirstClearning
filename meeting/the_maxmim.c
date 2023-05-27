/*Write a C program to input two numbers and find maximum between two numbers using conditional/ternary operator ?:.
 *How to find maximum or minimum between two numbers using conditional operator in C program.
 */
#include <stdio.h>
int main (void)
{
	int N1, N2;
	printf("Enter the first number: ");
	scanf("%d", N1);
	printf("Enter the second number: ");
	scanf("%d", N2);
	if (N1 > N2 ){
		printf("the maximum of the number is %d", N1);
	}else {
		printf("the maximum of the number is %d", N2);
	}	return (0);
}
