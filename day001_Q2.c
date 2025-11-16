// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>

int main(){
    printf("Enter two integers: ");
    int a,b;
    scanf("%i%i",&a,&b);
    printf("Sum=%i, Diff=%i, Product=%i, ",a+b,a-b,a*b);
    if(b==0){
        printf("Quotient=Not defined\n");
    }else{
        printf("Quotient=%i\n",a/b);
    }
    return 0;
}