/*Q14: write a program to input a character and check whether it is a vowel or constant using if-else.*/

#include<stdio.h>
int main() {
    char alphabet;
    printf("enter the alphabet:");
    scanf("%c",&alphabet);
    if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' || alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U')
    {
        printf("%c is a vowel\n",alphabet);
    }
    else{
        printf("%c is a consonant\n",alphabet);
    }
    return 0;
}

/*atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day7$ ./q2.out
enter the alphabet:A
A is a vowel
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day7$ ./q2.out
enter the alphabet:a
a is a vowel
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day7$ ./q2.out
enter the alphabet:h
h is a consonant
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day7$ ./q2.out
enter the alphabet:D
D is a consonant
*/
