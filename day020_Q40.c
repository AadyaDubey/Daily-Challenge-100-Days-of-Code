// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include<stdio.h>

int main (){
    char a;
    
    while((a = getchar()) != '\n'){
        (a=='1')?printf("0"):printf("1");
    }

    printf("\n");
    return 0;
} 

