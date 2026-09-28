/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.


Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main()
{
    char date[11];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    scanf("%s", date);

    int month = (date[3] - '0') * 10 + (date[4] - '0');

    printf("%.2s-%s-%.4s", date, months[month - 1], date + 6);

    return 0;
}