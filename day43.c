/*Q85: Reverse a string.


Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>

int main() {
    char str[100];
    int i;

    scanf("%s", str);

    for(i = 3; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}