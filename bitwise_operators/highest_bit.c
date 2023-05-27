/*Write a C program to input any number from user and find highest order set bit of given number using bitwise operator. How to find the highest order of the set bit of a given number using bitwise operator in C programming. Logic to get highest order set bit of a number in C programming.*/
#include <stdio.h>
int main(void)
{
#define x  sizeof(int);
	int N, i;
	int Z = -1; 
	printf("Enter a number: ");
	scanf("%d", &N);
	for(i = 0; i < x; i++)
	{
		if((N >> i) & 1)
			Z = i;
	}
	if(Z != i)
	{
		printf("Highest order set bit in %d is %d", N,Z);
	}
	else {
		printf("0 has no set bits.");
	}
	return (0);
}
