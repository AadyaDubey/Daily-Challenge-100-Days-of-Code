// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include<stdio.h>

int main (){
    int a;
    scanf("%i",&a);
    int b = 0;
    int i = 1;
    while(a!=0){
        b += (a%2)*i;
        a = a/2;
        i *= 10;
    }
    
    printf("%i\n",b);
    return 0;
}