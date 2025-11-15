// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include<stdio.h>

int main (){
    int spaces=0,digits=0,special=0;
    char a=0;
    while(a!='\n'){
        a = getchar();
        if(a!='\n'){
            if(a==' ')
                spaces++;
            else if(a>47&&a<58)
                digits++;
            else if(!(a>96&&a<123))
                special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n",spaces,digits,special);
    return 0;
}