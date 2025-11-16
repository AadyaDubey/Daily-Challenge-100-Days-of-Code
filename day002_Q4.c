// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>
#define Pi 3.14

int main(){
    int a;
    printf("Enter radius of circle: ");
    scanf("%i",&a);
    printf("Area:%.2f, Perimeter=%.2f\n",Pi*a*a,2*Pi*a);
    return 0;
}