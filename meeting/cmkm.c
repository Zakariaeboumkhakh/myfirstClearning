/*Write a C program to input length in centimeter and convert it to meter and kilometer.
 * How to convert length from centimeter to meter and kilometer in C programming.
 * Length conversion program in C from centimeter to meter and centimeter to kilometer.
 */
#include <stdio.h>
int main(void)
{
	int length;
	float km, m;
	printf("Enter a length: ");
	scanf("%d", &length);
	m = length / 100 ;
	km = (float)length / 100000;
	printf("Length in Meter = %.2f m \n", m);
	printf("Length in Kilometer = %.2f km\n", km);

	return (0);
}
