/*Write a C program to input number of days from user and convert it to years,
 * weeks and days. How to convert days to years, weeks in C programming.
 * Logic to convert days to years, weeks and days in C program.
 */
#include <stdio.h>
int main (void)
{
	int days, year, week ;
	printf("Enter a days: ");
	scanf("%d", &days);
	year = days / 365 ;
	week = (days - (year * 365)) / 7;
	days  = days - ((year * 365) + (week * 7));
	printf("%i days = %d year.s, %d week.s and %d day.s\n", days, year, week, days);
	return (0);
}
