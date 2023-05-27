/*Write a C program to input an alphabet and check whether it is vowel or consonant using switch case. C program to check vowel or consonant using switch case. Logic to check vowel or consonant using switch case.*/
#include <stdio.h>
int main (void)
{
	char A;
	printf("Enter an alphabet: ");
	scanf("%c", &A);
	switch (A)
	{
		case 'a':
		case 'o':
		case 'u':
		case 'e':
		case 'i':
		case 'A':
		case 'O':
		case 'U':
		case 'E':
		case 'I':
			printf("the alphabet %c is vowel\n", A);
			break;
		default:
			printf("the alphabet %c is conconant\n", A);
			break;
	}
	return (0);
}
