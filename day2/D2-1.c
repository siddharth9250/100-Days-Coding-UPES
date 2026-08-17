/* Q: Write a program to calculate area and perimeter of rectangle given its length and breadth.*/

#include<stdio.h>
int main()
{
	int l,b;
	printf("Enter the value of length & breadth");
	scanf("%d%d",&l,&b);
	printf("l=%d,b=%d\n",l,b);
	int perimeter=2*(l+b);
	int area=l*b;
	printf("the perimeter of Rectangle is:%d\n,The area of Rectangle is:%d\n",perimeter,area);
	return 0;
}

/*Enter the value of length & breadth12 18
l=12,b=18
the perimeter of Rectangle is:60
,The area of Rectangle is:216
*/
