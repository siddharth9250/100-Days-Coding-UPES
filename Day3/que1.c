/*Q1: Write a program to convert temperature from celsius to fahrenheit.*/

#include<stdio.h>
int main()
{
	int temp;
	printf("Enter the emperature in celsius");
	scanf("%d", &temp);
	float temperature = (9.0/5.0 * temp)+32;
	printf("temperature in fahrenheit is: %.2f\n",temperature);
	return 0;
}

/*atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day3$ ./q1.out
Enter the emperature in celsius30
temperature in fahrenheit is: 86.00
*/
