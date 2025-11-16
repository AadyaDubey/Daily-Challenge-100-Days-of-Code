// Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include<stdio.h>

int main (){
    printf("Enter two integers a and b: ");
    int a,b;
    scanf("%i%i",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap: %i %i\n",a,b);
}