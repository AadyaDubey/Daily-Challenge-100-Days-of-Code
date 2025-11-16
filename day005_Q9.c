// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h>

int main (){
    int P,r,t;
    printf("Enter principal balance, rate and time: ");
    scanf("%i%i%i",&P,&r,&t);
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n",P*r*t*0.01,P*pow((1+r*0.01),t)-P);
    return 0;
}