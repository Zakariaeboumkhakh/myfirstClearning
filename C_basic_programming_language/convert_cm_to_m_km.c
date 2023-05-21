/**
 * Write a C program to input length in centimeter and convert it to meter and kilometer.
 * How to convert length from centimeter to meter and kilometer in C programming.
 * Length conversion program in C from centimeter to meter and centimeter to kilometer.
 */
#include <stdio.h>
int main(void)
{
	float NUM, cm, m, km;
	puts("Enter length in centimete :");
	scanf("%f", &NUM);
	m = NUM / 100;
	km = NUM * 0.00001;
	printf("length in meter = %.0f m\n ", m);
	printf("length in kilometer = %.2fkm\n ", km);
	return (0);
}
