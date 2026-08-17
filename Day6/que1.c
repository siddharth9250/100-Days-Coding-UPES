/*Q11: write a program to input an integer and check whether ot is even or odd using if else.*/

#include<stdio.h>
int main () {
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the %d is even\n",a);
    }
    else
    {
        printf("the %d is odd\n",a);
    }
    return 0;
}

/*atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day6$ ./q1.out
enter the value of a:9
the 9 is odd
*/
