//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:


Input 2:
a
Output 2:


Input 3:
3
Output 3:


Input 4:
#
Output 4:

*/

#include<stdio.h>

int main (){
    printf("Enter a character: ");
    char a;
    scanf("%c",&a);

    if (a>='a'&&a<='z'){
        printf("Lowercase alphabet\n");
    }else if(a>='A'&&a<='Z'){
        printf("Uppercase alphabet\n");
    }else if(a>=0&&a<=9){
        printf("Digit\n");
    }else{
        printf("Special charactern\n");
    }
    return 0;
}