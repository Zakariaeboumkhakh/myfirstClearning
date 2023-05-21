/*Write a C program to input temperature in Centigrade and convert to Fahrenheit.
 * How to convert temperature from degree centigrade to degree Fahrenheit in C programming.
 * Logic to convert temperature from Celsius to Fahrenheit in C.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float centigrate, fahrenheit;
	printf("Enter temperature in Celsius: ");
	scanf("%f", &centigrate);
	fahrenheit = (((centigrate * 9) + 160) / 5);
	printf("Temperature in Fahrenheit = %f F\n", fahrenheit);
	return (0);
}
