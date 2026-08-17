/*Q2: Write a program to calculate  the area and circumference of a circle given its radiuis.*/

#include<stdio.h>
int main()
{
	int r;
	printf("Enter the Value of Radius(r)");
	scanf("%d",&r);
	float area=3.14*r*r;
	float cirumference=2*3.14*r;
	printf("the area of circle is:%f\n,the cirumference of circle is:%f\n",area,cirumference);
	return 0; 
}

/*
Enter the Value of Radius(r)6
the area of circle is:113.040001
,the cirumference of circle is:37.680000
*/
