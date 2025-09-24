//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>

int main (){
    printf("Enter the cost price and selling price: ");
    int cp,sp;
    scanf("%i%i",&cp,&sp);
    int a = (sp-cp)*100/cp;

    (a==0)?printf("No Profit No Loss\n"):(a<0)?printf("Loss %i%%\n",-1*a):printf("Profit %i%%\n",a);
    return 0;
}