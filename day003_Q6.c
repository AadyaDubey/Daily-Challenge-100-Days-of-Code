//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main (){
    printf("Enter value of a and b: ");
    int a,b;
    scanf("%i%i",&a,&b);
    int tmp;
    tmp=a;
    a=b;
    b=tmp;

    printf("After swap: %i %i\n",a,b);
    return 0;
}
