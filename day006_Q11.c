// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include<stdio.h>

int main (){
    printf("Enter an integer: ");
    int a;
    scanf("%i",&a);

    if(a%2==0){
        printf("%i is even\n",a);
    }else {
        printf("%i is odd.\n",a);
    }
    return 0;
}