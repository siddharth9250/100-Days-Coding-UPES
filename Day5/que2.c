/*Q10: write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

#include<stdio.h>
int main() {
    int totalseconds,hours,minutes,seconds;
    printf("enter time in seconds:");
    scanf("%d",&totalseconds);
    hours=totalseconds/3600;
    minutes=(totalseconds%3600)/60;
    seconds=totalseconds%60;
    printf("time=%02d:%02d:%02d\n",hours,minutes,seconds);
    return 0;
}

/*atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day5$ ./q2.out
enter time in seconds:45600
time=12:40:00
*/
