// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include<stdio.h>

int main (){
    int a;
    scanf("%d",&a);

    int b = 0;
    while(a!=0){
        b += a%10;
        a /= 10;
    }
    printf("%d\n",b);
    return 0;
}