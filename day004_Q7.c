//Q7: Write a program to swap two numbers without using a third variable.

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