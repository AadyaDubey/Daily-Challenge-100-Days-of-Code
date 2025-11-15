//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include<stdio.h>

int main (){
    char a=0;
    while(a!='\n'){
        a = getchar();
        if(a!='\n')printf("%c\n",a);
    }

    return 0;
}