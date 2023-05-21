/*Write a C program to input temperature in degree
 * Fahrenheit and convert it to degree Centigrade.
 * How to convert temperature from Fahrenheit to Celsius in C programming.
 * C program for temperature conversion.
 * Logic to convert temperature from Fahrenheit to Celsius in C program.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float centigrate, fahrenheit;
	printf("Enter Temperature in fahrenhei: ");
	scanf("%f", &fahrenheit);
	centigrate = (((fahrenheit - 32) * 5) / 9);
	printf("Temperature in celsius = %f C\n", centigrate);
	return (0);
}
