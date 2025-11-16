// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include<stdio.h>

int main (){
    int a;
    scanf("%i",&a);
    
    int i=1;
    int b=2;
    while(b<=a){
        i *= b;
        b += 2;
    }
    printf("%i (",i);

    for(int I=2;I<=a;I+=2){
        printf("%i",I);
        if(I==a){
            break;
        }
        printf(" * ");
    }
    printf(")\n");
    return 0;
}

