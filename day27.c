/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int i, j, stars;

    stars = 1;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");

        if (i < 5)
            stars = stars + 2;
        else
            stars = stars - 2;
    }

    return 0;
}

