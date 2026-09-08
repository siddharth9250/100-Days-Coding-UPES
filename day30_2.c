/*Q60: Count positive, negative, and zero elements in an array.


Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int p = 0, ne = 0, z = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if(a[i] > 0)
            p++;
        else if(a[i] < 0)
            ne++;
        else
            z++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d", p, ne, z);

    return 0;
}

