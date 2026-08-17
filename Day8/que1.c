/*Q15: Write a program to input a character and check wether it is uppercase alphabet , lowercase alphabet, digit, or special character*/

#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);
	if (ch >='A' && ch <='Z'){
	printf("Uppercase Alphabet\n");
	}else if (ch >='a' && ch <='z'){
	printf("Lowercase Aplhabet\n");
	}else if (ch >='0'&& ch <='9'){
	printf("Digit");
	}else{
	printf("Special Character\n");
	}
	return 0;
}

/*
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day8$ ./q1.out
Enter the character: H
Uppercase Alphabet
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day8$ ./q1.out
Enter the character: c
Lowercase Aplhabet
atul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day8$ ./q1.out
Enter the character: 7
Digitatul@atul-G15-1111:~/Desktop/100 Days Coding UPES/Day8$ ./q1.out
Enter the character: %
Special Character
*/
