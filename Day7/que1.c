/*Q13: write a program to input a year and check whether it is a leap yera or not using conditional statements.*/

#include<stdio.h>
int main() {
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("%d is a leap year\n",year);
    }
    else if(year%100==0)
    {
        printf("%d is not a leap year\n",year);
    }
    else if(year%4==0)
    {
        printf("%d is a leap year\n",year);
    }
    else {
        printf("%d is not a leap year\n",year);
    }
    return 0;
}

/*atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day7$ ./q1.out
enter the year:2360
2360 is a leap year
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day7$ ./q1.out
enter the year:2353
2353 is not a leap year
*/
