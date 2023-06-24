/*Write a function that prints the last digit of a number.
 *
 * Prototype: int print_last_digit(int);
 * Returns the value of the last digit
 */
#include <stdio.h>
int print_last_digit(int r);

int print_last_digit(int r)
{
	int last_digit = r % 10;
	printf("the last digit is %d",  last_digit);
	return (last_digit);
}
