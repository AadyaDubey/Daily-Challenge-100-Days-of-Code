//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

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