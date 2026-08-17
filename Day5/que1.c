/*Q9: write a program to calculate simple and compound interest for given principal,rate,and time.*/

#include<stdio.h>
#include<math.h>
int main(){
    float P,R,T,SI,CI,amount;
    printf("Enter Principal:");
    scanf("%f",&P);
    printf("Enter Rate:");
    scanf("%f",&R);
    printf("Enter Time:");
    scanf("%f",&T);
    // Simple interest
    SI=(P*R*T)/100;
    // Compound interest
    amount=P*pow((1+R/100),T);
    CI=amount-P;
    printf("Simple Interest=%.2f\n",SI);
    printf("Compound Interest=%.2f\n",CI);
    return 0;
}

/*atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day5$ ./q1.out
Enter Principal:3000
Enter Rate:6
Enter Time:4
Simple Interest=720.00
Compound Interest=787.43
*/
