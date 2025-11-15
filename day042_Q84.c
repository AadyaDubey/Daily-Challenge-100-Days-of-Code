// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include<stdio.h>

int main (){
    char a;
    while(a!='\n'){
        int a= getchar();
        if(a!='\n')printf("%c",a-32);
    }
    printf("\n");
    return 0;
}