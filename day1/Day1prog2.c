#include<stdio.h>
int main()
{
	int a,b;
	int sum,diff,product,quotient;
	printf("User enter two value");
	scanf("%d%d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	sum=a+b;
	diff=a-b;
	product=a*b;
	quotient=a/b;
	printf("sum=%d,diff=%d,product=%d,quotient=%d",sum,diff,product,quotient);
	return 0;
}

