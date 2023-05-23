/*Write a C program to input marks of five subjects of a student and calculate total,
 *average and percentage of all subjects. How to calculate total, average and percentage in C programming.
 *Logic to find total, average and percentage in C program
 */
#include <stdio.h>
int main(void)
{
	float ahmed, anas, zack, abdelah, ezzine, total, average;
	float percentage;
	printf("Enter five value of  subjects:");
	scanf("%f%f%f%f%f", &ahmed, &anas, &zack, &abdelah, &ezzine);
	total = ahmed + anas + zack + abdelah + ezzine;
	average = total / 5;
	percentage = (total / 500) * 100;

	printf("the total of all value is %.0f\n", total);
	printf("the average is %.0f\n", average);
	printf("percentage of all value is %.2f\n", percentage);
	return (0);
}
