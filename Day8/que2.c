/*Q16: Write a program to input three number and find the largest among them using if-else.*/

#include<stdio.h>
int main(){
	int a, b, c;

	printf("Enter Three Numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c){
	printf("largest is %d\n",a);
	}else if (b >= a && b >= c){
	printf("largest is %d\n",b);
	}else{
	printf("largest is %d\n",c);
	}
	return 0;
}

/*
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day8$ ./q2.out
Enter Three Numbers: -1 0 -4
largest is 0
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day8$ ./q2.out
Enter Three Numbers: 3 7 2
largest is 7
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day8$
*/
