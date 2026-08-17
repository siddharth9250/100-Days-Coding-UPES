/*Q7: Write a program to swap two numbers without using third variable*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Two Number: ");
	scanf("%d %d", &a, &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping:a=%d,b=%d\n",a,b);
	return 0;
}

/*atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day4$ ./q1.out
Enter Two Number: 12 23
after swapping:a=23,b=12
*/
