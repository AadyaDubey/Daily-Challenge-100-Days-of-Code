//Q30: Write a program to reverse a given number.
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/

#include<stdio.h>

int main (){
    int a,reversed = 0;
    scanf("%i",&a);

    while(a!=0){
        reversed = 10*reversed+(a%10);
        a = a/10;
    }

    printf("%i\n",reversed);
    return 0;
}