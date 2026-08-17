/*Write a program to swap two numbers using third variable*/

#include<stdio.h>
int main()
{
	int a,b,c;
 	printf("Enter Two Numbers:");
	scanf("%d %d", &a, &b);
	c=a;
	a=b;
	b=c;
	printf("after swapping:\n");
	printf("a=%d b=%d\n",a,b);
	return 0;
}

/*atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day3$ ./q2.out
Enter Two Numbers:25 24
after swapping:
a=24 b=25
*/
