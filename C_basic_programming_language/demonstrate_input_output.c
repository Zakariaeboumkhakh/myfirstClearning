/**
 * Write a C program to demonstrate input and output of all basic
 * and derived types. How to use scanf() and printf() function
 * perform input and output on primitive types in C programming.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)
{
	int A;
	unsigned int Aa;
	long B;
	unsigned long Bb;
	float C;
	char D;
	unsigned char Dd;
	double F;
	long double Z;
	/* read input each type*/
	printf("enter a integer value:");
	scanf("%d", &A);
	printf("enter a unsigned integer value:");
	scanf("%u", &Aa);
	printf("enter a long integer value:");
	scanf("%ld", &B);
	printf("please enter a unsigned long integer:");
	scanf("%ld", &Bb);
	printf("enter a float integer value:");
	scanf("%f", &C);
	printf("enetr a character:");
	D = getchar();
	getchar();
	printf("enetr another character :");
	Dd = getchar ();
	getchar();
	printf("enetr a double integer value: ");
	scanf("%lf", &F);
	printf("enter a  long doubel value : ");
	scanf("%Lf", &Z);
	/*display the value of all variable*/
	printf("\n you entered a signed int : %i\n", A);
	printf("you entered a unsigend int : %u\n\n", Aa);
	printf("you entered a long integer : %ld\n", B);
	printf("you entered a unsigned long integer : %ld\n\n", Bb);
	printf("you entered a float intger : %f\n", C);
	printf("you entered a character: %c\n\n", D);
	printf("you entered a character: %c\n\n", Dd);
	printf("you entered a double integer : %f\n", F);
	printf("you entered a long double integer: %Lf\n\n", Z);
	return (0);
}
