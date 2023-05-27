/*Write a C program to input any number from user and check whether nth bit of the given number is set (1) or not (0). How to check whether nth bit of a given number is set or unset using bitwise operator in C programming. C program to get the status of nth bit of a number.*/
#include <stdio.h>
int main(void)
{
	int X, Z, bit;
	printf("Enter the first and the second number: ");
	scanf("%d%d", &X,&Z);
	if (bit = (X >> Z & 1))
			{
			printf("%d bit of %d is set (1)\n",Z ,X);
			}
			else
			{
			printf("%d bit of %d is set (0)\n",Z ,X);
			}
			return (0);
			}
