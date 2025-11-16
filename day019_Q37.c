// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include<stdio.h>

int main (){
    int a,b;
    scanf("%d %d",&a,&b);

    int i = (a<b)?a:b;
    while(i>=1){
        if(a%i==0&&b%i==0){
            break;
        }
        i--;
    }
    
    printf("%d\n",i*a/i*b/i); 
    return 0;
}