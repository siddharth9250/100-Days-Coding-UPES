/*Q12: write an program to input an integer and check whether if it is positive,negative or zero using nested if-else.*/

#include<stdio.h>
int main() {
    int a;
    printf("enter an integer:");
    scanf("%d",&a);
    if (a>=0) {
        if(a==0) {
            printf("the number is zero\n");
        }
        else {
            printf("the number is positive\n");
        }
    }
    else {
        printf("the number is negative\n");
    }
    return 0;
}

/*atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day6$ ./q2.out
enter an integer:-27
the number is negative
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day6$ ./q2.out
enter an integer:13
the number is positive
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day6$ ./q2.out
enter an integer:001
the number is positive
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day6$ ./q2.out
enter an integer:0
the number is zero

*/
