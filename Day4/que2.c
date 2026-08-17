/*write a program to find and display the sum of the first n natural numbers.*/
#include<stdio.h>
int main() {
    int n,sum=0;
    printf("Enter n:");
    scanf("%d",&n); 
    for(int i =1; i<=n; i++)
    {
        sum=sum+i;
    }
    printf("sum=%d\n",sum);
    return 0;
}

/*atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day4$ ./q2.out
Enter n:4
sum=10
*/
