//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>

int main (){
    int a;
    scanf("%i",&a);
    int b=1;
    int i=1;
    while(i<a){
        b *= (i+1);
        i++;
    }
    printf("%i\n",b);
    return 0;
}