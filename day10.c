//write a program to classify a triangle as equilateral,isoceles,or scalene based on its sides
#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter side a of triangle:");
    scanf("%d", &a);
    printf("enter side b of triangle:");
    scanf("%d", &b);
    printf("enter side c of triangle:");
    scanf("%d",&c);
    if(a==b && b==c)
    {
        printf("it is a equilateral triangle");
    }
    else if(a==b || b==c || c==a)
    {
        printf("it is a isoceles triangle");
    }
    else{
        printf("it is a scalene triangle");
    }
} 